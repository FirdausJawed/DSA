#include<stdio.h>
#include<math.h>
int convert (int n);
int main(){

 int n;
 printf("enter the number to convert it in the binary form: ");
 scanf("%d",&n);
 printf("%d is %d in binary form",n,convert(n));

 return 0;
}

int convert (int n){

 int remainder = 0;
 int result = 0;
 int i = 0;

 while (n != 0){

   remainder = n%10;
   n/=10;
   result = result + (remainder * pow(2, i));
   i++;

 }

 return result;

}
