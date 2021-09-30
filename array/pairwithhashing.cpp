#include<iostream>
#include <algorithm>
using namespace std;

int main (){
   
    
    int arr[]={6,3,5,7,2,1,9,8,4};
    int k;
    cin>>k;
    int n = sizeof(arr)/sizeof(int);
    int hash [10000]={0};

    for (int i = 0; i < n; i++)
    {
        if (hash[k-arr[i]] != 0)
        {
           cout<<arr[i]<<" + "<<k-arr[i]<<" = "<<k<<endl;
        }
        
      hash[arr[i]]++;
    }

    return 0;
}