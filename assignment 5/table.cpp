#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enterthe number whose table is to print:  ";
    cin>>n;
    for (int i = 1; i<=10; i++){
        int m = (n*i);
        cout<<m;
    }

    return 0;
}
