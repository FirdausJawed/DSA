#include<iostream>
using namespace std;

bool ispow2(int n){
    if (n==0)
    {
        return false;
    }
   int p = ((n&(n-1))==0);
   return p;
}

int main (){
   int k;
   cin>>k;
   int x = ispow2(k);

   if (x)
   {
       cout<<"yes";
   }
   else{
       cout<<"no";
   }
   return 0;
}