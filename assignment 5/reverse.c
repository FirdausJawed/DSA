#include<stdio.h>
int main(){
 int n;
 int reverse =0;
 printf("enter the number:");
 scanf("%d",&n);

while ( n != 0){

 int remainder = n%10;
 reverse = reverse *10 + remainder;
 n=n/10;

}
 printf("reversed form of the number is %d",reverse);

 return 0;
 }
