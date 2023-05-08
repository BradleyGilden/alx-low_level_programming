#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void close_ELF(int elf);
void check_ELF(unsigned char *mgc);
void print_mgc(unsigned char *mgc);
void print_class(unsigned char *mgc);
void print_data(unsigned char *mgc);
void print_v(unsigned char *mgc);
void print_abi(unsigned char *mgc);
void print_osabi(unsigned char *mgc);
void print_type(unsigned int e_type, unsigned char *mgc);
void print_entry(unsigned long int addr, unsigned char *mgc);

/**
 * close_ELF - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_ELF(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * check_ELF - Checks if a file is an ELF file.
 * @mgc: A pointer to an array of ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_ELF(unsigned char *mgc)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (mgc[i] != 127 && mgc[i] != 'E' && mgc[i] != 'L' && mgc[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_mgc - Prints the magic numbers of an ELF header.
 * @mgc: A pointer to an array of ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_mgc(unsigned char *mgc)
{
	int i = 0;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", mgc[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @mgc: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *mgc)
{
	printf("  Class:                             ");

	switch (mgc[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", mgc[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @mgc: A pointer to an array containing the ELF class.
 */
void print_data(unsigned char *mgc)
{
	printf("  Data:                              ");

	switch (mgc[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", mgc[EI_CLASS]);
	}
}

/**
 * print_v - Prints version of an ELF header.
 * @mgc: A pointer to an array containing the ELF version.
 */
void print_v(unsigned char *mgc)
{
	printf("  Version:                           %d", mgc[EI_VERSION]);

	switch (mgc[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @mgc: A pointer to an array containing the ELF version.
 */
void print_osabi(unsigned char *mgc)
{
	printf("  OS/ABI:                            ");

	switch (mgc[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", mgc[EI_OSABI]);
	}
}

/**
 * print_type - Prints the type of an ELF header.
 * @e_type: The ELF type.
 * @mgc: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int e_type, unsigned char *mgc)
{
	if (mgc[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @mgc: A pointer to an array containing the ELF ABI version.
 */
void print_abi(unsigned char *mgc)
{
	printf("  ABI Version:                       %d\n", mgc[EI_ABIVERSION]);
}


/**
 * print_entry - Prints the entry point of an ELF header.
 * @addr: The address of the ELF entry point.
 * @mgc: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int addr, unsigned char *mgc)
{
	printf("  Entry point address:               ");

	if (mgc[EI_DATA] == ELFDATA2MSB)
	{
		addr = ((addr << 8) & 0xFF00FF00) | ((addr >> 8) & 0xFF00FF);
		addr = (addr << 16) | (addr >> 16);
	}

	if (mgc[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)addr);

	else
		printf("%#lx\n", addr);
}


/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, rret;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_ELF(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rret = read(o, header, sizeof(Elf64_Ehdr));
	if (rret == -1)
	{
		free(header);
		close_ELF(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_ELF(header->e_ident);
	printf("ELF Header:\n");
	print_mgc(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_v(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_ELF(o);
	return (0);
}
