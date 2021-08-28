#include<stdio.h>
int main(){
 int a;
 float c,d;
 printf("choose the option:\n 1. addition\n 2.substraction \n 3.multiplication\n 4.division\n");
 scanf("%d",&a);
 printf("enter two numbers");
 scanf("%f%f",&c,&d);
 switch(a){
   case 1:
   printf("the sum is %f",(c+d));
   break;
   case 2:
   printf("the difference is %f",(c-d));
   break;
   case 3:
   printf("the multiplication is %f",(c*d));
   break;
   case 4:
   printf("the division is %f",(c/d));
   break;
   default:
   printf("choose from the given options.");
   break;
 }
  return 0;
  }
