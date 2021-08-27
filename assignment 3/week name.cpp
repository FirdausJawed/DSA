#include<iostream>
using namespace std;
int main (){

    int n;
    cout<<"enter the number whose name has to show: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"monday";
        break;
     case 2:
        cout<<"tueday";
        break;    
     case 3:
        cout<<"wednesday";
        break;
     case 4:
        cout<<"thursday";
        break;
     case 5:
        cout<<"friday";
        break;    
     case 6:
        cout<<"saturday";
        break;
     case 7:
        cout<<"sunday";
        break;

    default:
         cout<<"enter a number between 1 and 7";
        break;
    }

    return 0;
}