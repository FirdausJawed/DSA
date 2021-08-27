#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;
     int m = 1;
    for (int i = 1; i<=n; i++){
       m = (n*i);
    }
     cout<<(m);
    return 0;
}