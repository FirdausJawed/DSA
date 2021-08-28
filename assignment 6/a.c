#include<stdio.h>
int main(){

 int count, n1=0, n2=1;
 printf("enter the number: ");
 scanf ("%d",&count);
 printf("%d \n %d",n1,n2);
 for(int i = 0; i<(count - 2);i++){

   int f = 0;
   f = n1+n2;
   n1 = n2;
   n2 = f;
   printf("%d\n",f);

 }

  return 0;
}
