#include<iostream>
using namespace std;
int main (){
  
  char A[] = "medical";
  char B[] = "decimal";
  int H[26]={0},i;

  for ( i = 0; A[i] != '\0'; i++)
  {
    H[A[i]-97] +=1;
  }

  for ( i = 0; B[i] != '\0' ; i++)
  {
     H[A[i]-97] -=1;

     if (H[A[i]-97]<0)
     {
        cout<<"it is not anagram";
        break;
     }
     if (B[i] == '\0')
     {
        cout<<"anagram";
        break;
     }
  }
  
    return 0;
}