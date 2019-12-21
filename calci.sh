#!/bin/sh
echo "enter two numbers"
read a
read b
read c
case "$c" in
1) r=`expr $a + $b`;;
2) r=`expr $a \* $b`;;
3) r=`expr $a - $b`;;
*) echo "wrong value";;
esac
echo "$r is result"