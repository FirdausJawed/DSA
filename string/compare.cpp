#include<iostream>
using namespace std;
int main(){

 string A = "point";
 string B = "pointing";
 int i,j;
 for ( i = 0,j = 0;A[i] !='\0', B[i] != '\0' ; i++,j++)
 {
    if (A[i] != B[j])
    {
       cout<<"these are not same";
        break;
    }
    else{
        
        cout<<"same same"<<endl;
        break;
    }
    
 }
 

  return 0;
}