#include<bits/stdc++.h>
using namespace std;

int main (){

  queue<int>s;
  s.push(1);
  s.push(10);
  s.push(9);
  s.push(6);
  s.push(3);

  while(!s.empty()){
    cout<<s.front()<<endl;
    s.pop();
  }

    return 0;
}