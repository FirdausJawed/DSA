#include<iostream>
using namespace std;
int main(){
     
     char A[]="FIRDAUS";
     int i;
     for ( i = 0; A[i] != '\0'; i++)
     {
         A[i]+=32;
     }
     cout<<A;

    return 0;
}