#include<iostream>
#include <algorithm>
using namespace std;

int main (){

    int arr[]={1,2,3,4,4,4,5,8,9,};
    int n = sizeof(arr)/sizeof(int);
    int hash[10000]={0};

    for (int i = 0; i < n; i++)
    {
       hash[arr[i]]++;
    }


    for (int i = 0; i <= n; i++)
    {
        if (hash[i]>1)
        {
        cout<<i<<" is repeating "<<hash[i]<<" times "<<endl;
        } 
    }
    
            
    return 0;
}
