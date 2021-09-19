#include<iostream>
using namespace std;

int Get (struct Array arr,int index){

    if (index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

int main (){

  struct Array arr ={{1,2,3,4,5},6,9};


    return 0;
}