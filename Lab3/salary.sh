#!/bin/bash
read basic
read ta
((x=basic/10))
#hra=`expr \*$basic / 10|bc`
((gs=basic + x + ta))
echo "Gross salary : Rs. $gs"