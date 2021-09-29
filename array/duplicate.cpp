#include<iostream>
#include <algorithm>
using namespace std;

int main (){

    int arr[]={1,2,3,4,4,5,8,9,};
    int n = sizeof(arr)/sizeof(int);

    int lastduplicate=0;
    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1] && arr[i] != lastduplicate)
        {
          cout<<arr[i];
          lastduplicate=arr[i];
        }
        
    }
    
        
    return 0;
}