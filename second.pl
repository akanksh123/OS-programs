#!/usr/bin/perl
$sum=0;
foreach $num(@ARGV) {
until ($num==0){
$n=$num%10;
$sum=$sum+$n;
$num=$num/10;}
print("sum is $sum");
}