#include <iostream>
using namespace std; 
int main (){

    int t;
    cout<< "enter the temperature in celcius: ";
    cin>>t;

    int temp = (t*1.8)+32;
    cout<< "the temperature in fahrenheit is "<<temp; 

    return 0;
}