#include<stdio.h>
int main(){
 int n ;

printf("enter the number:");
scanf("%d",&n);

int remainder = n%2;

switch(remainder){
 case 0:
 printf("it is even");
 break;
 case 1:
 printf("it is odd");
 break;
 default:
  printf("enter an integer");
  break;
}

 return 0;
 }
