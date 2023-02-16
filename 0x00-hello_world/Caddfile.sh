#!/bin/bash

while read file
do
	touch $file
	chmod 777 $file
	echo '#include <stdio.h>'>$file
	echo "">>$file
	echo '/**'>>$file
    echo ' * main - is the entry point for program'>>$file
	echo ' *'>>$file
    echo ' * Return: 0 if compilation is successful. 1 otherwise'>>$file
	echo ' */'>>$file   
	echo "">>$file
	echo 'int main(void)'>>$file
	echo '{'>>$file
	echo '        printf("Hello World!");'>>$file
	echo '        return (0);'>>$file
	echo '}'>>$file
done
