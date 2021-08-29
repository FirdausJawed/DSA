# include <iostream>
using namespace std;

double e (int x, int n){
    static double s = 1;
    if (n==0){
      return s;
    }else{
    s=1+(x*s)/n;
    return e (x,n-1);
    }  
}


int main (){
    int a =4;
    int b =10;

    double r = e(a,b);
    cout<<r;
    return 0;
}