#include<iostream>
using namespace std;

void set (struct Array *arr, int index,int x){
  if (index>=0 && index<arr->length)
  {
    arr->A[index]=x;
  }
  
}


int main (){

  struct Array arr ={{1,2,3,4,5},6,9};


    return 0;
}