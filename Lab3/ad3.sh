#!/bin/bash
read filename
if[[-f filename ]]; then
	n=1
	while read -r line ;do
		if((n%2==0));then
			echo "$line" >> evenfile.txt
		else
			echo "$line" >> oddfile.txt
		fi
		n=$((n+1))
	done < $filename
else
	echo "Invalid filename"
fi