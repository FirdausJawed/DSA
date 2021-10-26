#include<bits/stdc++.h>
using namespace std;

void print (map<int,string>&m){
    cout<<m.size()<<endl;
    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){

 map<int,string>m;
 m[1]="fj";
 m[5]="fird";
 m[3]="muskan";
 m[2]="tgb";
 m[7]="firdaus";
 m.insert({4,"the great fj"});
 int x;
 cin>>x;
 auto it = m.find(x);
 if (it != m.end())
 {
    cout<<"yes "<<m[x]<<endl;
 }
 else{
    cout<<"no"<<endl;
 }

//print(m);
    return 0;
}