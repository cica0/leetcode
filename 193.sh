#!/bin/bash

pattern="[0-9][0-9][0-9]-[0-9][0-9][0-9]-[0-9][0-9][0-9][0-9]"
pattern2="[0-9]{0,1}\([0-9][0-9][0-9]\)[0-9][0-9][0-9]-[0-9][0-9][0-9][0-9]"
cat file.txt | while read line
do 
    if [[ $line =~ $pattern ]]; then
        echo $line
    elif [[ $line =~ $pattern2 ]]; then
        echo $line
    else
        echo "no way"
    fi
done
