#include<stdio.h>
int main(){

 int n;
 int x;
 printf("enter the number: ");
 scanf("%d",&n);

 for(int i =2; i<n; i++){

    if(n%i == 0){
      x++;
    }

 }
 if (x>1){
   printf("composite");
 }
 else{
   printf("prime");
 }

return 0;
}
