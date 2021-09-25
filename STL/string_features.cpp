#include<iostream>
#include<algorithm>
using namespace std;

int main (){

    string s0;
    if (s0.empty())
    {
        cout<<"it is empty!"<<endl;
    }
    
    //append

    s0.append("i love chocolate");
    cout<<s0<<endl;

    s0+=" and milk";
    cout<<s0<<endl;

    //length

    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;

    return 0;
}