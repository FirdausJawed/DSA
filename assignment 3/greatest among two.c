#include<stdio.h>
int main(){
 int a,b;
 printf("enter two number to check: ");
 scanf("%d%d",&a,&b);

 if (a>b){
   printf("%d is greatest",a);
 }
 else if(a==b){
   printf("both are equal");
 }
 else{
   printf("%d is greatest",b);
 }
return 0;
}
