#include<iostream>
using namespace std;

int Min (struct Array arr){
    int min=arr.A[0];
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        if (arr.A[i]<min)
        {
           min=arr.A[i];
        }
        
    }
    return min;
}

int main (){

  struct Array arr ={{1,2,3,4,5},6,9};

    return 0;
}