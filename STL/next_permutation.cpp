#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main (){
    
    vector<int>v{1,2,3,4,5,6};

    next_permutation(v.begin(),v.end());
    cout<<endl;
    for(int x:v){
        cout<<x<<" ";
    }
    
    return 0;
}