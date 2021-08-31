#include<iostream>
using namespace std;
int main(){
    char x[] = "how are you";
    int vowels=0;

    for (int  i = 0; x[i] != 0; i++)
    {
        if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' )
        {
           vowels++;
        }
        
    }
    cout<<vowels;

  return 0;
}