#!/bin/bash
my_list=$(echo $@ | xargs -n2 | sort | xargs)

echo $my_list