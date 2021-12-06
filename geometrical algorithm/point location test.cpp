#include<iostream>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define lli long long int
using namespace std;
 
int x1 , y1;
lli x2 , y2;
lli x3 , y3;
string res[] = {"TOUCH\n" , "RIGHT\n" , "LEFT\n"};
 
int orientation()
{
	lli val = (y2 - y1) * (x3 - x2) - (x2 - x1) * (y3 - y2);
	if(val == 0) return val;
	
	return val > 0 ? 1 : 2;
}
 
int main()
{
	int n;
	cin>>n;
	REP(i , n){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		cout<<res[orientation()];
	}
}