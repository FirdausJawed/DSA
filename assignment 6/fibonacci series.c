#include<stdio.h>

int main(){

  int n1 = 0, n2= 1, n, f=0;
  printf("enter the number till you want the series: ");
 scanf("%d",&n);

 printf("%d \n%d",n1,n2);
 for(int i= 2; i<=n; i++){

   f= n1+n2;

   n1 = n2;
   n2 = f;
printf("\n%d",f);
 }
  return 0;
  }
