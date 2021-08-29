# include <iostream>
using namespace std;

 int f[10];
int fib (int n){
    if(n<=1){
        return n;
    }
    else{
        if (f[n-1]==-1)
        {
            f[n-1]=fib(n-1);
        }
        if (f[n-2]==-1)
        {
            f[n-2]=fib(n-2);
        }
      return f[n-1]+f[n-2];  
        
    }
}

int main (){

    for(int i = 0; i<110;i++){
        f[i]=-1;
    }

    int a =10;
    //int b =10;

    int r = fib(a);
    cout<<r;
    return 0;
}