#include <iostream>
using namespace std;
int main (){

     int n;
     cin>>n;
    int arr [n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    
    int res=0;
    for (int i = 0; i < n-1; i++)
    {
        int imax=arr[i];

        for (int j = 0; i < i; j++)
        {
           imax=max(imax,arr[j]);
        }

        int rmax=arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax=max(rmax,arr[j]);
        }
        res=res+min(imax,rmax)-arr[i];
    }

    cout<<res<<endl;
    
    return 0;
}