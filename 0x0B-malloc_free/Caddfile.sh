#!/bin/bash

while read file
do
	touch $file
	chmod 777 $file
	echo '#include <stdio.h>'>$file
	echo '#include "main.h"'>>$file
	echo "">>$file
	echo '/**'>>$file
    echo ' * main - entry point'>>$file
	echo ' *'>>$file
    echo ' * Return: 0 always'>>$file
	echo ' */'>>$file   
	echo "">>$file
	echo 'int main(void)'>>$file
	echo '{'>>$file
	echo '	return (0);'>>$file
	echo '}'>>$file
done
