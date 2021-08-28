#include<stdio.h>
int main(){
 int n ;
 printf("enter the week number: ");
 scanf("%d",&n);
 switch (n){
   case 1:
   printf("monday");
   break;
   case 2:
   printf("tueday");
   break;
   case 3:
   printf("wednesday");
   break;
   case 4:
   printf("thursday");
   break;
   case 5:
   printf("friday");
   break;
   case 6:
   printf("saterday");
   break;
   case 7:
   printf("sunday");
   break;

   default:
   printf("enter number between 1 to 7");
   break;
 }
  return 0;
  }
