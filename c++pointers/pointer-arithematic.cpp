#include<iostream>
using namespace std;
int main (){

    int A[5]{2,4,6,7,8};
    int *p = A;
    int *q = &A[4];

    cout<<*p<<endl;
    p++;
     cout<<*p<<endl;
     p--;
      cout<<*p<<endl;
      p=p+2;
       cout<<*p<<endl;
        cout<<p<<endl;
        cout<<p+2<<endl;
         cout<<*(p+2)<<endl;   
          cout<<p-q<<endl;
    return 0;
}