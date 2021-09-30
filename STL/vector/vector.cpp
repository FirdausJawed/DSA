#include<iostream>
#include<vector> 
using namespace std;
int main (){

   vector<int>d{1,2,3,4,5};
   d.push_back(16);
   //d.pop_back();
   d.insert(d.begin()+3,4,1000);
   d.erase(d.begin());
   cout<<d.size()<<endl;

   cout<<d.capacity()<<endl;
   //d.clear();

   cout<<d.front()<<endl;
   cout<<d.back()<<endl;

   for(int x: d)
   {
    cout<<x<<" _ ";
   }
    return 0;
}