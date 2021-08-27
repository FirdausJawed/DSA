#include<iostream>
using namespace std;
int main (){

    int a,b;
    cout<<"enter the two numbers that has to be compared: ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b;
    }else if (a<b){
        cout<<a<<" is lesser than "<<b;
    }else{
        cout<<a<< " is equal "<<b;
    }

    return 0;
}