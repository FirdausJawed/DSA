#include<iostream>
using namespace std;

int main (){

    int arr[]={1,2,3,4,6,7,8,9,10,13,14,15};
    int n = sizeof(arr)/sizeof(int);   

    int res = arr[1]-arr[0];
    int minval = arr[0];

    for (int i = 1; i <n; i++)
    {
      res=max(res,arr[i]-minval);
      minval=min(minval,arr[i]);
    }
    cout<< res<<endl;
    
    return 0;
}