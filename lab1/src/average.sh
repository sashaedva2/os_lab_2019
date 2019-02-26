#!/bin/bash
s=0
for n in $@
do
    let s=s+n
done 
echo "кол-во элементов: $#"
echo "Average= $(($s/$#))"
