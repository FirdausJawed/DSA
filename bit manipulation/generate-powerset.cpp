#include<iostream>
#include<math.h>
using namespace std;

void printpowerset(string str){
    int n = str.length();
    int powsize = pow(2,n);

    for (int i = 0; i < powsize; i++)
    {
       for (int j = 0; j< n; j++)
       {
           if (i&(1<<j) != 0)
           {
               cout<<str[j];
           }
           cout<<endl;          
       }
       
    }
    
}
int main(){

    string s;
    cin>>s;
    printpowerset(s);

    return 0;
}