#include<iostream>
using namespace std;


struct Array
{
 int A[10];
 int size;
 int length;
};

// void Display(struct Array arr)
//  {
//  int i;
//  printf("\nElements are\n");
//  for(i=0;i<arr.length;i++)
//  printf("%d ",arr.A[i]);
//  }


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
// Display(arr);
 Min(arr);
    return 0;
}