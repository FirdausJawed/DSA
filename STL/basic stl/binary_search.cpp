#include<iostream>
#include<algorithm>
using namespace std;
int main (){

    int arr [] = {1,2,3,7,40,40,40,40,99,110};
    int n = sizeof(arr)/sizeof(int);

    //main concept
    int key;
    cin>>key;

    bool present = binary_search(arr,arr+n,key);
    if (present)
    {
        auto lb = lower_bound(arr,arr+n,key);
        cout<<"lower bound of "<<key<<" is "<<(lb-arr)<<endl;

        auto ub = upper_bound(arr,arr+n,key);
        cout<<"upper bound of "<<key<<" is "<<(ub-arr)<<endl;

        cout<<key<<" is repeating itself "<<(ub-lb)<<" times";
    }
    else{
        cout<<key<<" is absent";
    }

    return 0;
}