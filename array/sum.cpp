#include<iostream>
using namespace std;


struct Array
{
 int A[10];
 int size;
 int length;
};


int Sum (struct Array arr){
    int s=0;
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        s+=arr.A[i];
    }
    
    return s;
}

int main (){

  struct Array arr ={{1,2,3,4,5},6,9};

    return 0;
}