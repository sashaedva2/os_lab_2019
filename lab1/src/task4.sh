#!/bin/bash
{
    for((i=1;i<=150;i++))
    do
    echo "$(od -An -N1 -i /dev/random)"
    done
} >> number.txt