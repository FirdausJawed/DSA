#include<iostream>
#include<algorithm>
using namespace std;
int main (){

    int arr [] = {1,2,3,7,99,110};
    int n = sizeof(arr)/sizeof(int);

    rotate(arr,arr+2,arr+n);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;
}