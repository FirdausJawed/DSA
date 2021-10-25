#include<iostream>
using namespace std;

int findodd (int arr[],int n) {
    int xr=0,res1=0,res2=0;

    for (int i = 0; i < n; i++)
    {
        xr=xr^arr[i];
    }
    int sn=xr & ~(xr-1);

    for (int i = 0; i < n; i++)
    {
        if ((arr[i]&sn) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else{
            res2 = res2 ^ arr[i];
        }
        
    }
    cout<<res1<<","<<res2<<endl;
    
}

int main (){

   int arr[7]={22,33,1,2,1,2,2};
   findodd(arr,7);
   return 0;
}