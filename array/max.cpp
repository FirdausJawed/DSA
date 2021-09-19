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

  struct Array arr ={{1,2,3,14,5},6,9};
//   Display(arr);
  Max(arr);
    return 0;
}