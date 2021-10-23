#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){

 // there are 3 stl operaters to operate here
 // 1. insert function, 2. search or query, 3. erase and iterate

 map <string,int>m;
 //insert

 m.insert(make_pair("mango",100));

 pair<string,int>p;
 p.first="apple";
 p.second=200;

 m.insert(p);

 m["banana"]=300;

 //2. search

 string fruit;
 cin>>fruit;

 auto it = m.first(fruit);

 if (it!=m.end()){
    cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
 }
 else{
    cout<<"could not find"<<endl;
 }
 
 //erase

 m.erase(fruit);

 //another way to find a particular map;

 if (m.count (fruit)) {
    cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
 }
 else{
    cout<<"not finding the things"<<endl;
 }
   //m+="22";

   //iterate over all the key values

   m["litchi"]=400;
   m["pineapple"]=500;
   m["orange"]=600;

   for(auto it = m.begin(); it != m.endl(); it++){
       cout<<it->first<<" : "<<it->second<<endl;
   }

   //for each
   for (auto p:m){
       cout<<p.first<<"-+-+->"<<p.second<<endl;
   }

    return 0;
}