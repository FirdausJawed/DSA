#include<iostream>
#include<vector> 
using namespace std;
int main (){

   vector<int>v{1,2,3,4,5};
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
       int no;
       cin>>no;
       v.push_back(no);
    }
    

    for(int x:v){
        cout<<x<<" ";
    }

    return 0;
}