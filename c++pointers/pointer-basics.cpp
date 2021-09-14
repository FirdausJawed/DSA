#include<iostream>
using namespace std;
int main (){

  int n;
  cin>>n;

  int *p = &n;
  cout<<n<<endl;
  cout<<&n<<endl;
  cout<<p<<endl;
  cout<<&p<<endl;
  cout<<*p<<endl;

   return 0;
}