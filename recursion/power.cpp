# include <iostream>
using namespace std;

int power (int m, int n){
    if(n>0){
       return (power(m,n-1)*m);
    }
    else{
        return 1;
    }
}
int main (){
    int a =5;
    int b =3;

    int r = power(a,b);
    cout<<r;
    return 0;
}