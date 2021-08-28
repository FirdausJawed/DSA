#include<stdio.h>
int main(){

int n;
printf("enter the number till u want the sum: ");
scanf("%d",&n);

double sum = 0.0;

 for(float i =1; i<=n; i++ ){
   sum = sum+(1/i);
 }

printf("sum is %f",sum);
return 0;
}
