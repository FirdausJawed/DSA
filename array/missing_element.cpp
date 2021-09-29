#include<iostream>
using namespace std;

int main (){

   int arr[]={1,2,3,4,6,7,8,9};
   int n = sizeof(arr)/sizeof(int);
   int sum=0;
   for (int i = 0; i < n; i++)
   {
     sum=sum+arr[i];
   }

   int s = ((n+2)*(n+1))/2;
   
   int x=s-sum;

   cout<<x<<endl;

    return 0;
}

