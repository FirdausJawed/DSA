#include<iostream>
using namespace std;

int findodd (int arr[],int n) {
    int res=0;

    for (int i = 0; i < n; i++)
    {
        res=res^arr[i];
    }
    cout<<res;
    return res;
    
}

int main (){
//    int k;
//    cin>>k;
   int arr[7]={22,333,1,2,1,2,22};
   findodd(arr,7);
   return 0;
}