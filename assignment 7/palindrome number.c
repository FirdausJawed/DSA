#include<stdio.h>
int main(){

 int n,  result=0;
 printf("enter the number: ");
 scanf("%d",&n);

 while (n != 0){

 int remainder=0;
 remainder = n%10;
 result = (result*10) + remainder;
 n/=10;

 }
 if (n == result){
   printf("palindrome");
 }
  else{
   printf("not palindrome");
  }

return 0;
}
