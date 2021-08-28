#include<stdio.h>
int main(){
 int a,bc;
 printf("enter three number to check: ");
 scanf("%d%d%d",&a,&b,&c);

 if (a>b && a>c){
   printf("%d is greatest",a);
 }
 else if(a<b && b>c){
   printf("%d is greatest",b);
 }
 else{
   printf("%d is greatest",c);
 }
return 0;
}
