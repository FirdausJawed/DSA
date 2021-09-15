#include<iostream>
using namespace std;
int main (){

  int n,arr[n],i,key,l,h,mid;
  mid=(l+h)/2;
  l=0;
  h=n-1;
  cout<<"enter the length of the array: ";
  cin>>n;
  cout<<"enter the elements of the array: ";
  for ( i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"enter the key element: ";
  cin>>key;
  

 while (l<=h)
 {
    if (mid==key)
    {
       cout<<"key is found and is "<<mid;
    }
    else if (mid>key)
    {
       l=mid+1;
    }
    else{
       h=mid-1;
    }
    
 }
 
   return 0;
}