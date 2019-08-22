#!/bin/bash
read  pattern folder

x=`find "$folder" -name  "$pattern"`
for i in $x;do
echo $i
done