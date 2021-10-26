// given n no. of strings, print uniquesstrings in any order with frequency

#include<bits/stdc++.h>
using namespace std;
int main(){

   unordered_map <string,int>m;
   int n;
   cin>>n;
   string s;

   for (int i = 0; i < n; i++)
   {
       cin>>s;
       m[s]++;
   }

   int q;
   cin>>q;
   while(q--){
       string s;
       cin>>s;
       cout<<m[s]<<endl;
   }
   return 0;
}