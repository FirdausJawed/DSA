#include<iostream>
using namespace std;
int main (){

    int *p = new int [5];
    for (int  i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
    
    delete []p;
    p=nullptr;
    cout<<p;
   return 0;
}