# Makefiles

A Makefile is a text file used to specify a set of rules and instructions for building and managing software projects. It is commonly used in software development to automate the compilation and linking of source code files into executable programs or libraries. Makefiles are especially useful for managing complex projects with multiple source files and dependencies.

## The key components of a Makefile are targets, dependencies, and rules:

* #### Targets: These are the things you want to build, such as executables, libraries, or other output files.

* #### Dependencies: These are the files that the targets depend on. If a dependency file changes, the associated target might need to be rebuilt.

* #### Rules: A rule specifies how to build a target from its dependencies. It contains a recipe, which is a set of commands that are executed to produce the target.

<hr>

## Directory Files

* [0-Makefile](0-Makefile) - creates an executable from a main.c and school.c file using `gcc`
