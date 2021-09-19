#include<iostream>
using namespace std;

int Sum (struct Array arr){
    int s=0;
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        s+=arr.A[i];
    }
    
    return s;
}
float avg (struct Array arr){
   return (float) Sum(arr)/arr.length;
}

int main (){

  struct Array arr ={{1,2,3,4,5},6,9};

    return 0;
}