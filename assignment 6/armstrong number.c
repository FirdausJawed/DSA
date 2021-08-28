#include<stdio.h>
#include <math.h>
int main(){
 int n, result = 0;
 int remainder = 0;
 int fj, count = 0;

 printf("enter the number:");
 scanf("%d",&n);

 while (n != 0){


   count ++;
    n /= 10;
 }
 n = fj;
 while (n != 0){

   remainder = n%10;
   result =pow(remainder , count) + result;
   n/=10;

 }
  if (result == fj){
    printf("is armstrong");
  }
  else{
    printf("is not armstrong");
  }
 return 0;
 }
