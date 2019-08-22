#!/bin/bash
echo "Enter extension"
read ext
echo "enter foldername"
read f
x = 'ls *"$ext'
for i in $x
do
	mv $i $f
done
