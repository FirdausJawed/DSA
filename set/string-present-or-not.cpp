#include<bits/stdc++.h>
using namespace std;
int main (){
  unordered_set<string> s;
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    string str;
    cin>>str;
    s.insert(str);
  }

  int t;
  cin>>t;
  while(t--){
      string str;
      cin>>str;
      if (s.find(str)==s.end())
      {
        cout<<"No"<<endl;
      }
      else{
        cout<<"Yes"<<endl;
      }
   }
    return 0;
}