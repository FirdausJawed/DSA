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
    for (int  i = 0; i < n-1; i++)
    {
       if (arr[i]>arr[i+1])
       {
           cout<<"not sorted";    
       }
       else
       {
       cout<<"sorted";
       break;
       }
    }
    
    return 0;
}