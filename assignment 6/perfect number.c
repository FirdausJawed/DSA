#include<stdio.h>
int main(){
 int n,sum = 0, remainder=0, s=0;

 printf("enter the number:");
 scanf("%d",&n);

 for(int i =1; i<(n-1); i++){

   if((n%i)==0){

     sum = sum +i;
     
   }
  }
 while (n!=0){

 remainder = n%10;
 s = s+remainder;
 n = n/10;
 }

 if (s==sum){
   printf("perfect number");
 }
 else{
   printf("not perfect number");
 }
 return 0;
 }
