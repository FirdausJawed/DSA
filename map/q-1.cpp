// given n no. of strings, print uniquesstrings in lexiographical order with frequency

#include<bits/stdc++.h>
using namespace std;
int main(){

   map <string,int>m;
   int n;
   cin>>n;
   string s;

   for (int i = 0; i < n; i++)
   {
       cin>>s;
       m[s]++;
   }
   for(auto pr:m){
       cout<<pr.first<<" "<<pr.second<<endl;
   }

    return 0;
}