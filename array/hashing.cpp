#include<iostream>
#include <algorithm>
using namespace std;

int main (){
   
    int arr[]={1,2,3,4,6,9};
    int n = sizeof(arr)/sizeof(int);
    int hash [10000]={0};

    for (int i = 0; i < n; i++)
    {
      hash[arr[i]]++;
    }
    
    int l=arr[0], h=arr[n-1];

    for (int i = l; i <= h; i++)
    {
      if (hash[i]==0)
      {
         cout<<i<<" "<<endl;
      }
      
    }
    

    return 0;
}