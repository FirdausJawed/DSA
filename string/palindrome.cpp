#include<iostream>
using namespace std;
int main(){
  
    //   a string is said to be palindrome if we reverse 
    //   that string and still getting the same string

    string s;
    char t;
    cout<<"enter the string: ";
    cin>>s;
           
        //    reversing

    int i,j;
   for ( j = 0;s[j] != '\0' ; j++)
    {
        
    }
  j= j-1;
  for ( i = 0; i < j; i++)
  {
    //    t = s[i];
    //    s[i]=s[j];
    //    s[j] = t;
       if (s[i] == s[j])
    {
       cout<<"these are palindrome";
        break;
    }
    else{

        cout<<"not palindrome";
        break;
    }
  }
  
   //   comparing
    

    return 0;
}