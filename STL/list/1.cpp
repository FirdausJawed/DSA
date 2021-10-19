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
     cout<<endl;

   // some more functions to perform

   l2.push_back("orange");
   l2.push_back("lemon");

    for(string s:l2){
       cout<<s<<" ";
   } 
    cout<<endl;

    //remove fruit

    string f;
    cin>>f;
    l2.remove("guava");
    for(string s:l2){
       cout<<s<<"-->";
   } 
  cout<<endl;

   //arase one or more elements

   auto it = l2.begin();
   it++;
   it++;
   l2.erase(it);

 for(string s:l2){
       cout<<s<<"-->";
   } 
  cout<<endl;
   //we caqn insert an element

   it=l2.begin();
   it++;

   l2.insert(it,"fruit juice");
    for(string s:l2){
       cout<<s<<"-->";
   } 
  cout<<endl;

    return 0;
}