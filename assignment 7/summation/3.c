#include<stdio.h>
int main(){

int n;
int x;

printf("enter the number till u want the sum: ");
scanf("%d",&n);

printf("enter the value of x: ");
scanf("%d",&x);

double sum = 0.0;

 for(float i =1; i<=n; i++ ){
   sum = sum+(x/(i));
 }

printf("sum is %f",sum);
return 0;
}
