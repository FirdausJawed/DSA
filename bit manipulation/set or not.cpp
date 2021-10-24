#include<iostream>
using namespace std;

void kbit (int n, int k){
    if (n & (1<<(k-1))!=0)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
int main (){

   int n,k;
   cin>>n>>k;

   kbit(n,k);

    return 0;
}