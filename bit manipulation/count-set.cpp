#include<iostream>
using namespace std;

int countset(int n)
{
    int res = 0;
    while(n>0){
        if (n%2==0)
        {
            res++;
            n/=2;
        }       
    }
    cout<<res<<"-->";
}

int main (){
   int k;
   cin>>k;
   countset(k);
   return 0;
}