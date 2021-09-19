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
//   Display(arr);
  Sum(arr);
    return 0;
}