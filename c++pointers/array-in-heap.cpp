#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;

    int *p = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
     for (int i = 0; i < n; i++)
    {
        cout<<p[i]<< " ";
    }
    cout<<endl;

    delete []p;

    cout<<"enter new size";
    cin>>n;

    p=new int [n];
      for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
     for (int i = 0; i < n; i++)
    {
        cout<<p[i]<<" ";
    }

    cout<<endl;

    delete []p;
    p=nullptr;
    cout<<p;

    return 0;
}