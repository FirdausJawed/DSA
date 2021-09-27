#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int>a;
    vector<int>b(5,10);
    vector<int>c(b.begin(),b.end());
    vector<int>suru{1,2,3,4,5};

    for(int x:b){
        cout<<x<<" , ";
    }
}