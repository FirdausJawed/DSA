#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    
    vector<int>v{1,2,3,4,5,6};

    rotate(v.begin(),v.begin()+3,v.end());

    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    
    return 0;
}