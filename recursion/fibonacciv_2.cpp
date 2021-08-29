# include <iostream>
using namespace std;

int fib (int n){
    if(n<=1){
        return n;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}

int main (){
    int a =10;
    //int b =10;

    int r = fib(a);
    cout<<r;
    return 0;
}