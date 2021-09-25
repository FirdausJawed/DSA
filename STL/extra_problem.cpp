#include<iostream>
#include<algorithm>
using namespace std;

int main (){

    int a, b;
    cin>>a>>b;

    swap(a,b);

    cout <<a<<" and "<<b<<endl;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    return 0;
}