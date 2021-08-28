#include<stdio.h>
int main(){
 int n, sum =0 ,  remainder=0;

 printf("enter the number:");
 scanf("%d",&n);

 while (n !=0){
   remainder = n%10;
   sum= sum+remainder;
   n=n/10;
 }
 printf("the sum of the digits is %d",sum);

 return 0;
 }
