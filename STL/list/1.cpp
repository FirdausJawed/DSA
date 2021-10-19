#include <iostream>
#include<list>
using namespace std;
int main (){

   list <int> l;
   list<int>l1{1,5,8,2,8,4};

   list<string>l2{"apple","banana","pineapple","mango","guava"};
   l2.push_back("kiwi");

    l2.sort();
    l2.reverse();
    l2.pop_front();
    l2.push_front("strawberry");
    l2.pop_back();

    for(auto it = l2.begin(); it != l2.end(); it++){
        cout<<(*it)<<"-";
    }
    cout<<endl;
   for(string s:l2){
       cout<<s<<"-->";
   } 
   
    return 0;
}