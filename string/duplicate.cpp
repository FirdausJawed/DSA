#include<iostream>
using namespace std;
int main (){

  char A[] ="firdaus-jawed";
  int H[26] = {0};
  int i, x=0;
  
  for ( i = 0; A[i] != '\0'; i++)
  {
     x=1;
     x=x<<A[i]-97;

     if (x&H>0)
     {
        cout<<A[i]<<endl;
     }
     else{
         H[i] =x|H[i];
     }
  }

    return 0;
}