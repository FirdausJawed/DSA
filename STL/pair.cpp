#include<iostream>
#include<algorithm>
using namespace std;

int main (){

   pair<int,char> p;
   p.first=10;
   p.second='F';
   cout<<p.first<<"  "<<p.second<<endl;

   //another pair using first one
    pair<int,char> p2(p);
    cout<<p2.first<<"  "<<p2.second<<endl;

   //pair with string
    pair<int,string>p3 = make_pair(100,"Firdaus");
    cout<<p3.first<<"  "<<p3.second<<endl;

    //take input;
    int a,b;
    cin>>a>>b;
    pair<int,int>p4 = make_pair(a,b);
    cout<<p4.first<<"  "<<p4.second<<endl;

    //pair of pair
    pair<pair<int,int>,string>car;
    car.second="favourite car";
    car.first.first=10;
    car.first.second=20;
    cout<<car.first.first<<"  "<<car.first.second<<"  "<<car.second<<endl;
       
    return 0;
}