#include<iostream>
using namespace std;

int main (){

    int arr[]={1,2,3,4,6,7,8,9,10,13,14,15};
    int n = sizeof(arr)/sizeof(int);
    
    int diff=arr[0]-0;
    for (int  i = 0; i < n; i++)
    {
       if (diff<arr[i]-i)
       {
          cout<<diff+i<<endl;
          diff++;
       }
       
    }
    



    return 0;
}