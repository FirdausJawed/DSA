#include<iostream>
#include <algorithm>
using namespace std;

int main (){
   
    int arr[]={1,2,3,4,5,6,7,8,9};
    int k;
    cin>>k;
    int n = sizeof(arr)/sizeof(int);

    int i=0;
    int j=n-1;

    while(i<j){
        if (arr[i]+arr[j]==k)
        {
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
            i++;
            j--;
        }
        else if(arr[i]+arr[j]<k){
            i++;
        }
        else{
            j--;
        }
        
    }
    
    return 0;
}