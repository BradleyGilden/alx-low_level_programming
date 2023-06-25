# Dynamic Libraries

### What is a Library?

A library is basically just a file that contains data or instructions that programmes source externally in order to use in it's functionality. Libraries are NOT executable on their own
<br><br>

## Directory Files

* [1-create_dynamic_lib.sh](1-create_dynamic_lib.sh) - script to create dynamic library
* [main.h](main.h) - header file of compiled code
* [100-operations.so](100-operations.so) - dynamic library of calculator code
* [libdynamic.so](libdynamic.so) - dynamic library of custom C library

<br>

## Static Library vs Dynamic Library

### What is a Static Library?

Static libraries are single files that contained precompiled code of other object files, this ensures modularity and avoids other programs from recompiling the functionality in the library. Static Libraries are utilized at COMPILATION during the LINKING stage. This means the functionality we need from the library is copied into our final executable file.

`Cons`: If the program is dependent on many static libraries, at compile time, you are copying 100's of files of code into the application. Applications can become really large.

If there are any changes to the functions in the library the program has to be re-compiled with the new functions

`Pros`: Since the libraries are precompiled and copied to the application, the application itself will not be dependent on external libraries existing in the environment at run time.

Library file type extensions include:
| Windows | Linux |
| ------: | ----: |
| .lib    | .a    |

for more info on how to create a static library see [here](https://github.com/BradleyGilden/alx-low_level_programming/blob/main/0x09-static_libraries/README.md)

### What is a Dynamic Library?

Dynamic Libraries also known as "shared libraries" or DLL (Dynamic Link Library), are libraries which are linked at RUN time of a program.
<br>These Library files contain compiled object code, with additonal information and metadata. When a program is run, the systems linker locates and loads the library into memory

`Cons`: Since the final executable of a program depends on a shared library, if that library is not present on the system the program is being executed, it could lead to the program crashing


`Pros`: Programs which utilize shared libraries tend to be smaller. Since the external functionality is not copied into the final executable and called at runtime instead this can reduce memory taken up by the program.

Library file type extensions include:
| Windows | Linux  | MacOS|
| ------: | ----:  | ---: |
| .dll    | .so    | .dylb|

<br>

## Creating a Dynamic Library in Linux

**important commands to note:**

`nm` - lists symbols from object files
```
$ nm -D  /lib/x86_64-linux-gnu/libselinux.so.1 | head
                 w _ITM_deregisterTMCloneTable
                 w _ITM_registerTMCloneTable
                 U __asprintf_chk
                 U __assert_fail
                 U __ctype_b_loc
                 w __cxa_finalize
                 U __errno_location
                 U __fprintf_chk
                 U __fsetlocking
                 U __fxstat
```
`ldd` - prints shared object dependencies

```
$ ldd /bin/ls
        linux-vdso.so.1 (0x00007ffd6e5c2000)
        libselinux.so.1 => /lib/x86_64-linux-gnu/libselinux.so.1 (0x00007f020fbb7000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f020f9c5000)
        libpcre2-8.so.0 => /lib/x86_64-linux-gnu/libpcre2-8.so.0 (0x00007f020f934000)
        libdl.so.2 => /lib/x86_64-linux-gnu/libdl.so.2 (0x00007f020f92e000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f020fc14000)
        libpthread.so.0 => /lib/x86_64-linux-gnu/libpthread.so.0 (0x00007f020f90b000)
```

`ldconfig` - configure dynamic linker run-time bindings. Creates necessary links and updates cache for the most recent shared libraries found in directories specified by the command line.

```
sudo ldconfig
```
<br>

**Example of creating a dynamic library on linux:**
<table>
    <tr>
        <th>main.h</th>
        <th>add.c</th>
        <th>main.c</th>
    </tr>
    <tr>
        <td>

```c

#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

int add(int a, int b);

#endif /*_MAIN_H_*/
```
\
        </td>
        <td>
```c
#include "main.h"

int add(int a, int b)
{
    return (a+b);
}
```
\
        </td>
        <td>
```c
#include "main.h"

int main(void)
{
    printf("%d\n", add(2, 5));
    return (0);
}
```
\
        </td>
    </tr>
</table>

* step1: compile  source code into object files using `-c`, and `-fPIC`(Position independent Code), which is required to create position independent code that can be used in a shared library

  ```Powershell
  gcc -c -fPIC add.c -o add.o
  ```

* step2: Created a Dynamic library, the `-shared` flag tells the compiler that it is a dynamic library

  ``` Powershell
  gcc -shared add.o -o libadd.so
  ```

* step3: making the library accessible. You can do so by setting the environment variable `LD_LIBRARY_PATH`, other methods include copying library to system directories like `/usr/local/lib` or update systems cache using `sudo ldconfig`

  ```Powershell
  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
  ```

* step4: compile the program and link it with the dynamic library. The `-L` flag tells the linker to search for libraries in a specific directory, in this case it's the current directory. `-ladd` links against the libadd.so library. 
  ```Powershell
  gcc main.c -o program -L. -ladd
  ```
