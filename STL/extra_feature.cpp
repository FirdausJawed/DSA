#include<iostream>
#include<algorithm>
using namespace std;

int main (){

   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
     cin>>arr[i];
   }

   swap(arr[0],arr[n-1]);

    for (int i = 0; i < n; i++)
   {
     cout<<arr[i]<<" ";
   }
   cout<<endl;
   next_permutation(arr,arr+n);

     for (int i = 0; i < n; i++)
   {
     cout<<arr[i]<<" ";
   }
   
    return 0;
}