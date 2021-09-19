#include<iostream>
using namespace std;
int main (){

int n,A[n],B[n], i,j;
  cout<<"enter the length of the array";
  cin>>n;
  cout<<"enter the elements of the array: ";
  for ( i = 0; i < n; i++)
  {
    cin>>A[i];
  }
  
  for ( i = n-1,j=0; i >=0 ; i--,j++)
  {
    B[j]=A[i];
  }
  for ( i = 0; i < n; i++)
  {
    A[i] = B[i];
  }
  cout<<A[n]<<endl;

   return 0;
}