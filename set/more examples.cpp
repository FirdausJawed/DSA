#include<iostream>
#include<set>
using namespace std;
int main (){

   set<pair<int,int>>s;

   s.insert(make_pair(10,1));
   s.insert(make_pair(100,3));
   s.insert(make_pair(20,11));
   s.insert(make_pair(11,1));
   s.insert(make_pair(200,1));
   s.insert(make_pair(5,1));
   s.insert(make_pair(5,3));

   s.erase(s.find(make_pair(5,3)));
   s.insert(make_pair(2,3));

   for(auto p:s){
       cout<<p.first<<","<<p.second<<endl;
   }

  auto it = s.lower_bound(make_pair(20,1));
  cout<<it->first<<" "<<it->second<<endl;

    auto i = s.upper_bound(make_pair(20,1));
   cout<<i->first<<" ? "<<i->second<<endl;
    return 0;
}