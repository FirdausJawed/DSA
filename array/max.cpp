#include<iostream>
using namespace std;


struct Array
{
 int A[10];
 int size;
 int length;
};


int Max (struct Array arr){
    int max=arr.A[0];
    int i;
    for ( i = 0; i < arr.length; i++)
    {
        if (arr.A[i]>max)
        {
           max=arr.A[i];
        }
        
    }
    return max;
}

int main (){

  struct Array arr ={{1,2,3,4,5},6,9};

    return 0;
}