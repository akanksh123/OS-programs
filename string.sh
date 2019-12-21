#!/bin/sh
read str
n=`expr "$str" : ".*"`
echo "$n "
if test $n -ge 6 
then 
sub=`expr "$str" : '\(...\).*'`
echo "$sub"
else 
echo "string is too short"
fi
echo "enter a char"
read a
pos=`expr "$str" : '[^'$a']*'$a''`
echo "pos is $pos"