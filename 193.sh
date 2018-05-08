#!/bin/bash

pattern="^[\(]?[0-9]{3}[\)- ][0-9]{3}-[0-9]{4}$"
#pattern2="^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$"
cat file.txt | while read line
do 
    if [[ $line =~ $pattern ]]; then
        echo $line
    fi
done


