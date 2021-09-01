#include <iostream>
using namespace std;

int main()
{
     char x[]="mota bhai";
     char a[7];
     char t;
     int i,j;
   // method 1
    for ( j = 0; x[j] != '\0'; j++)
    {

     }
     j=j-1;
     for ( i = 0; i < j; i++,j--)
     {
       t = x[i];
       x[i]=x[j];
       x[j]=t;
    }
    
   cout<<x<<endl;
   
//    method 2
   
  //  for ( i = 0; x[i] != '\0'; i++)
  //  {
       
  //  }
  //  i=i-1;
  //  for (j = 0; i >=0; i--,j++)
  //  {
  //      a[j] = x[i];
  //  }
   
  //  cout<<a<<endl;

    return 0;
}