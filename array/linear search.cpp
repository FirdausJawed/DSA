#include<iostream>
using namespace std;
int main (){

  int n,arr[n],i,key;
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
     }
      else{
          cout<<"the search is unsucessful as it is not in the array";
      }
  }


   return 0;
}