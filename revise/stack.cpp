#include<bits/stdc++.h>
using namespace std;

int main (){

  stack<int>s;
  s.push(1);
  s.push(10);
  s.push(9);
  s.push(6);
  s.push(3);

  while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
  }

    return 0;
}