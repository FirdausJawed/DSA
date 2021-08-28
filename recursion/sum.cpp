# include <iostream>
using namespace std;

int sum (int n){
    if(n>0){
       return (sum(n-1)+n);
    }
    else{
        return 0;
    }
}
int main (){
    int a =5;
    int r = sum(a);
    cout<<r;
    return 0;
}