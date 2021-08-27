#include <iostream>
using namespace std;
int main(){

  int a,b,c;
  cout<<"enter 3 number: ";
  cin>>a>>b>>c;
  if(a=b=c){
      cout<<"all numbers are equal!!";
  }else if(a>b && a>c){
      cout<<a<<" is greatest.";
  }else if(b>a && b>c){
      cout << b<<"is greatest";
  }else{
      cout<<c<< " is greatest!!";
  }
    return 0;
}