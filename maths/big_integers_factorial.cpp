#include <iostream>
using namespace std;

void multiply (int *arr, int &n, int no){
    int carry =0;
    for (int i = 0; i < n; i++)
    {
       int product = arr[i]*no+carry;

       arr[i]=product%10;
       carry=product/10;
    }
    while(carry){
        arr[n]=carry%10;
        carry=carry/10;
        n++;
    }
    
}

void big_factorial(int number){
    int arr [1000];
    for (int i = 0; i < 1000; i++)
    {
       arr[i]=0;
    }
    arr[0]=1;
    int n=1;

    for (int i = 2; i <= number; i++)
    {
        multiply(arr,n,i);
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout<<arr[i];
    }
    
}

int main (){
    int n;
    cin>>n;

    big_factorial(n);

    return 0;
    }
    