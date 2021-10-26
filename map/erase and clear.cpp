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

 int p;
 cin>>p;
 auto it = m.find(p);
 if (it != m.end())
 {
    cout<<"ok"<<endl;
    m.erase(it);
    print(m);
 }
 else{
    cout<<"no such value present"<<endl;
 }
 m.clear();
 cout<<"cleared everything"<<endl;
    return 0;
}