# Makefiles

A Makefile is a text file used to specify a set of rules and instructions for building and managing software projects. It is commonly used in software development to automate the compilation and linking of source code files into executable programs or libraries. Makefiles are especially useful for managing complex projects with multiple source files and dependencies.

## The key components of a Makefile are targets, dependencies, and rules:

* #### Targets: These are the things you want to build, such as executables, libraries, or other output files.

* #### Dependencies: These are the files that the targets depend on. If a dependency file changes, the associated target might need to be rebuilt.

* #### Rules: A rule specifies how to build a target from its dependencies. It contains a recipe, which is a set of commands that are executed to produce the target.

<hr>

## Directory Files

* [0-Makefile](0-Makefile) - creates an executable from a main.c and school.c file using `gcc`
* [1-Makefile](1-Makefile) - improves makefile by adding variables for compiler and source files
* [2-Makefile](2-Makefile) - recompiles object files if source files change
* [3-Makefile](3-Makefile) - added rules: clean, oclean, fclean and re
* [4-Makefile](4-Makefile) - Completes makefile by adding compilation flags
* [100-Makefile](100-Makefile) :
  * name of the executable: school
  * rules: all, clean, fclean, oclean, re
    * all: builds your executable
    * clean: deletes all Emacs and Vim temporary files along with the executable
    * oclean: deletes the object files
    * fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
    * re: forces recompilation of all source files
  * variables: CC, SRC, OBJ, NAME, RM, CFLAGS
    * CC: the compiler to be used
    * SRC: the .c files
    * OBJ: the .o files
    * NAME: the name of the executable
    * RM: the program to delete files
    * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
  * The all rule should recompile only the updated source files
  * The clean, oclean, fclean, re rules should never fail
  * You are not allowed to have a list of all the .o files
  * You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable
  * You are not allowed to use the string $(CC) more than once in your Makefile
  * You are only allowed to use the string $(RM) twice in your Makefile
  * You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable)
  * You are not allowed to have an $(OBJ) rule
  * You are not allowed to use the %.o: %.c rule
  * Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
  * Your Makefile should not compile if the header file m.h is missing
