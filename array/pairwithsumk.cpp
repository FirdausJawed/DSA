#include<iostream>
#include <algorithm>
using namespace std;

int main (){

    int arr[]={6,3,5,7,2,1,9,8,4};
    int k;
    cin>>k;
    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j < n; j++)
       {
           if (arr[i]+arr[j]==k)
           {
              cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
           }
           
       }
       
    }

    return 0;
}