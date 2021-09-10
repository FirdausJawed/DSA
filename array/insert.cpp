#include<iostream>
using namespace std;
int main (){
  int n,i,new_array,arr[n];
  cout<<"enter the length of the array";
  cin>>n;
  cout<<"enter the elements of the array!!";
  for ( i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  cout<<"enter the element that  have to be added to the array";
  cin>>new_array;
  arr[i] = new_array;
  for ( i = 0; i < n+1; i++)
  {
     cout<<arr[i]<<' ';
  }
  cout<<endl;
    return 0;
}