# include <iostream>
using namespace std;

int ncr (int n,int r){
    if (n==r || r==0){
        return 1;
    }
    else{
        return ncr(n-1,r-1)+ncr(n-1,r);
    }
}

int main (){

    int a =5;
    int b =4;

    int r = ncr(a,b);
    cout<<r;
    return 0;
}