#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

void permutate (char a[],int i, set<string>&s){
    if (a[i]=='\0')
    {
      string t(a);
      s.insert(t);
    }

    for (int j = i; a[j] != '\0'; j++)
    {
        swap(a[i],a[j]);
        permutate(a,i+1,s);
        swap(a[i],a[j]);
    }
    
}

int main(){


   char a[100];
   cin>>a;
   set<string>s;
   permutate(a,0,s);

   for(auto it:s){
       cout<<it<<" ? ";
   }

    return 0;
}