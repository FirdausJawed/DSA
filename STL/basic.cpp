#include<iostream>
using namespace std;

template <typename T>
int search (T A[],int n,T key){
    for (int i = 0; i < n; i++)
    {
        if (A[i]==key)
        {
            return i;
        }        
    }
    return -1;
}

int main (){

   int n;
   cin>>n;
   int A[n];

   for (int i = 0; i < n; i++)
   {
       cin>>A[i];
   }
   
   int key;
   cin>>key;
   
   cout<<search (A,n,key)<<endl;

    return 0;
}