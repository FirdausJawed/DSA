#include <iostream>
using namespace std;
int main (){

    int n;
    cin>>n;
    int price [n];
    for (int i = 0; i < n; i++)
    {
       cin>>price[i];
    }
    
    int profit=0;

    for (int i = 1; i < n; i++)
    {
        if (price[i+1]>price[i])
        {
           profit+=price[i+1]-price[i];
        }
        
    }
    cout<<profit<<" "<<endl;

    return 0;
}