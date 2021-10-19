#include<iostream>
#include<algorithm>
using namespace std;
int main (){

    int arr [] = {1,2,3,7,99,110};
    int n = sizeof(arr)/sizeof(int);

    //main concept
    int key;
    cin>>key;

    auto it = find(arr, arr+n,key);
    int index = it - arr;
     if (index == n)
     {
        cout<<key<<" not present";
     }
     
     else{
         cout<<"present at index "<<index;
     }

    return 0;
}