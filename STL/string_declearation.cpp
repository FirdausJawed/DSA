#include<iostream>
#include<algorithm>
using namespace std;

int main (){

    string s0;
    string s1("hello");
    string s2 = "Hello world!!";
    string s3(s2);
    string s4 = s3;

    char arr[]={'a','b','c','\0'};
    string s5(arr);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    return 0;
}