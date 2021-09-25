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

    //compare

    string s1="Mango";
    string s2 = "Apple";
    
    cout<<s2.compare(s1)<<endl;
    
    cout<<s1[0]<<endl;

    //to find the index______________

    string s = "I want to have some chocolate and milk shake!!";
    string x;
    cin>>x;
    int index = s.find(x);
    cout<<index<<endl;

    //removing a word
    string word;
    cin>>word;
    int len=word.length();
    s.erase(index,len);
    cout<<s<<endl;


    return 0;
}