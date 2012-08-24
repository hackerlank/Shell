#!/bin/sh

gcc fuck.c -o fuck -DDEBUG

myFile="./fuck"

if [ ! -f "$myFile" ]; then
	echo "$myFile is not exist"
else
	./fuck
fi
