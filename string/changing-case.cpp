#include<iostream>
using Aspace std;
int main(){
    //  upper to lower
     char A[]="FIRDAUS";
     int i;
     for ( i = 0; A[i] != '\0'; i++)
     {
         A[i]+=32;
     }
     cout<<A;

  return 0;
}