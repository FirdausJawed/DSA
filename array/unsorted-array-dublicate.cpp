#include<iostream>
using namespace std;

int main (){

    int arr[]={1,2,3,4,4,4,5,8,8,9,};
    int n = sizeof(arr)/sizeof(int);
    
     for (int i = 0; i < n-1; i++)
     {
        int count=1;
        if (arr[i] != -1)
        {
            for (int j  = i+1; j < n; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
                
            }
            
        }
          if (count>1)
     {
        cout<<arr[i]<<" - "<<count<<endl;
     }
     }
    return 0;
}