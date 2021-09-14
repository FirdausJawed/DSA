#include<iostream>
using namespace std;

void display (){
    cout<<"Hello!! this is Firdaus Jawed";
}


int main (){
      
     void (*fp) ();
     fp = display;
     (*fp) ();
 
    return 0;
}