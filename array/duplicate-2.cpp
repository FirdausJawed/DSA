#include<iostream>
#include <algorithm>
using namespace std;

int main (){

    int arr[]={1,2,3,4,4,5,8,9,};
    int n = sizeof(arr)/sizeof(int);

    for (int  i = 0; i < n; i++)
    {
       if (arr[i] == arr[i+1])
       {
          int j = i+1;
          while(arr[j]==arr[i]) j++;

          cout<<arr[i]<<" is appearing "<<j-i<<" times!";
          i=j-1;
       }
       
    }
    
    
    return 0;
}