#include<iostream>
using namespace std;


struct Array
{
 int A[10];
 int size;
 int length;
};

void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
 
void Set (struct Array *arr, int index,int x){
  if (index>=0 && index<arr->length)
  {
    arr->A[index]=x;
  }
  
}


int main (){

  struct Array arr ={{1,2,3,4,5},6,9};
   Set(&arr,0,15);
   Display(arr);
    return 0;
}