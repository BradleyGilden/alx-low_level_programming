#!/bin/bash

while read file
do
	touch $file
	chmod 777 $file
done
