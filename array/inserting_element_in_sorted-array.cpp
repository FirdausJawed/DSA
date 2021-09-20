#include<bits/stdc++.h>
using namespace std;
int main (){

    int x,n;
    cin>>x;
    n=6;
    int arr[6]={3,5,6,9,12};
    int i = n-1;
    while (arr[i]>x)
    {
        arr[i]=arr[i];
        i--;
    }
    arr[i+1]=x;
    
    cout<<arr<<endl;

    return 0;
}