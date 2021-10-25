#include<iostream>
using namespace std;


int bitcount(int n){

    int res=0;
    while(n>0){
        n=(n & (n-1));
        res++;
    }
    cout<<res<<endl;
    return res;
}

int main (){
   int k;
   cin>>k;
   bitcount(k);
   return 0;
}