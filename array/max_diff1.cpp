#include<iostream>
using namespace std;

int main (){

    int arr[]={1,2,3,4,6,7,8,9,10,13,14,15};
    int n = sizeof(arr)/sizeof(int);    
    
    int res = arr[1]-arr[0];
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           res = max(res,arr[j]-arr[i]);
        }
        
    }
   cout<< res<<endl;
    
    
  return 0;
}