#include<stdio.h>
#include<math.h>
int main(){

int n;
int x; 8

printf("enter the number till u want the sum: ");
scanf("%d",&n);

printf("enter the value of x: ");
scanf("%d",&x);

double sum = 0.0;

 for(float i =1; i<=n; i++ ){
   sum = sum-pow(-1,i)*(pow(x,i)/i);
 }

printf("sum is %lf",sum);
return 0;
}
