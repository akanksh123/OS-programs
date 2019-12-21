#!/bin/sh
read f1
read f2
if test -e $f1 && test -e $f2 
then 
l=`ls -l $f1 | cut -c 2-10`
m=`ls -l $f2 | cut -c 2-10`  
echo "$l  $m"
if [ $l = $m ]
then 
echo "both files has same permission"
else 
echo "$f1 has $l and $f2 has $m"
fi
else 
echo "Files does not exist"
fi