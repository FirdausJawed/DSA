#include<iostream>
using namespace std;
int main (){

  int n,arr[n],i,del;
  cout<<"enter the length of the array";
  cin>>n;
  cout<<"enter the elements of the array: ";
  for ( i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"enter the index of the element that has to be delete: ";
  cin>>del;
  for ( i = del; i < n-1; i++)
  {
     arr[i]=arr[i+1];
  }
 n--;
 for ( i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
   

   return 0;
}