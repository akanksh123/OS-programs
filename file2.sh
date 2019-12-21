#!/bin/sh

for file in "$@"
do
if test -e $file
then 
m=`echo $file | tr '[a-z]' '[A-Z]'`
if test -e $m
then 
echo "file cannot be created"
else
mv $file $m
echo "file created"
fi
else 
echo "file does not exist"
fi
done