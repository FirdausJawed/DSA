#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int arr [n];
    for (int j = 0; j < n; j++)
    {
       cin>>arr[j];
    
    }
    int marker = 1;
    for (int  i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
           marker = 0;
           break;
        }
        
    }
    if (marker==0)
    {
       cout<<"not sorted";
    }
    else{
        cout<<"sorted";
    }
    return 0;
}