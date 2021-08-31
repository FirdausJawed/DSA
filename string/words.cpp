#include<iostream>
using namespace std;
int main(){
    char x[] = "how are you";
    int word = 1;

    for (int i = 0; x[i] != '\0'; i++)
    {
       if (x[i]==' ' && x[i-1] != ' ')
       {
          word++;
       }
       
    }
    
   cout<<word;
  return 0;
}