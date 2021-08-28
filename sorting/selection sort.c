#include<stdio.h>
int main(){

 int n;
 scanf("%d",&n);

 int arr[n];
 for (int f = 0; f<n; f++){

   scanf("%d",&arr[f]);

 }

 for(int i=0; i<=(n-1); i++){
   for (int j = 0; j<(i+1); j++){
     if(arr[j]<arr[i]){
       int temp;
       temp = arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
     }
   }
 }

 for (int j = 0; j<n; j++){

   printf("%d",arr[j]);

 }

  return 0 ;
}
