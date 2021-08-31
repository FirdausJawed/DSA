#include<iostream>
using namespace std;
int main(){
    char x[] = "how are you";
    int vowels=0;
    int consonent = 0;

      //  vowels
    for (int  i = 0; x[i] != 0; i++)
    {
        if (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' )
        {
           vowels++;
        }
        // consonent
      
      else if ((x[i]>=65 && x[i]<=90)||(x[i]>=97 && x[i]<=122))
      {
        if (x[i]!='a' || x[i]!='e' || x[i]!='i' || x[i]!='o' || x[i]!='u' || x[i]!='A' || x[i]!='E' || x[i]!='I' || x[i]!='O' || x[i]!='U'){
          consonent++;
        }
      }
    }
    cout<<vowels<<"  "<<consonent;
    
  return 0;
}