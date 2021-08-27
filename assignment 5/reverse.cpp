#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the numnber: ";
    cin>>n;
    int reverse = 0;

   while(n!=0){
     int remainder = n%10;
     reverse = reverse*10 + remainder;
     n = n/10;
   }
   cout<<reverse;

    return 0;
}