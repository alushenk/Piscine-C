#!/bin/sh/
touch -A -000001 -a *.txt
stat -r bomb.txt | cut -d ' ' -f 9
