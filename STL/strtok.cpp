#include<iostream>
#include<cstring>
using namespace std;
int main(){

   char s[100] = "It would be nice if I will live alone.";
   char *ptr = strtok(s," ");
   cout<<ptr<<endl;

    while (ptr != NULL)
    {
       ptr = strtok(NULL," ");
       cout<<ptr<<endl;
    }
    
    return 0;
}