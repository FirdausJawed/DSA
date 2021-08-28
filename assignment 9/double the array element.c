#include<stdio.h>

void arr2(int arr[],int n){

  for(int i = 0; i<n; i++){
    arr[i]= 2*arr[i];
  }

}

int main(){

 int n;
 printf("enter the length of the array: ");
 scanf("%d",&n);

 int arr[n];

 for(int i = 0; i<n; i++){
   scanf("%d",&arr[i]);
 }
arr2( arr, n);
 for(int i = 0; i<n; i++){
     printf("corresponding the number after multiply ");
   printf("%d\n",arr[i]);
 }
return 0;
}
