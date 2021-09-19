#include<iostream>
using namespace std;
int main (){

    int A[4] = {3,5,2,7},i,j;
    for ( i = 0,j=3; i < j; i++,j--)
    {
       int temp;
       temp=A[i];
       A[i]=A[j];
       A[j]=temp;
    }
    
   cout<<A<<endl;

   return 0;
}