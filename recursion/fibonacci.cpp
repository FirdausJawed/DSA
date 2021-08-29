# include <iostream>
using namespace std;

int fib (int n){
    double s = 1, t1=1, t0=0;
   if (n<=1)
   {
       return n;
   }
   else{
        for( int i=1;i<=n; i++){
        s=t0+t1;
        t0=t1;
        t1=s;
        } 
   }
  return s;
}

int main (){
    int a =10;
    //int b =10;

    int r = fib(a);
    cout<<r;
    return 0;
}