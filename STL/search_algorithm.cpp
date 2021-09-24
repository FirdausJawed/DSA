#include<iostream>
#include<algorithm>
using namespace std;
int main (){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    
    int key;
    cin>>key;

    //main concept

    auto it = find(arr, arr+n,key);
    int index = it - arr;
    cout<<index;
     if (index == n)
     {
        cout<<"not present";
     }
     
     else{
         cout<<"present";
     }

    return 0;
}