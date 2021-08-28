#include<stdio.h>

int convert (int n);
int main(){

 int n;
 printf("enter the number to convert it in the binary form: ");
 scanf("%d",&n);
 printf("%d is %d in binary form",n,convert(n));

 return 0;
}

int convert (int n){
 int i=1;
 while (n != 0){
   int remainder = n%2;
   n/=2;
   int result = result + remainder*i;
   i = i*10;
 }
 return result;

 }
