#include<iostream>
using namespace std;
int main (){

  int n,arr[n],i,key,temp;
  cout<<"enter the length of the array";
  cin>>n;
  cout<<"enter the elements of the array: ";
  for ( i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  cout<<"enter the element that has to be detected: ";
  cin>>key;

  for ( i = 0; i < n; i++)
  {
     if (key==arr[i])
     {
         cout<<"the key is found and it's index "<<i;
        temp = arr[i];
        arr[i]=arr[0];
        arr[0]=temp;
     }
      else{
        cout<<"the search is unsucessful as it is not in the array";
      }
  }

   return 0;
}