#include<iostream>
using namespace std;
int main (){
    
    int x = 10;
    int &y=x;
     
    cout<<&x<<" "<<&y;

    x++;
    y++;
    cout<<x<<endl;
    
    return 0;
}