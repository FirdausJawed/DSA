#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
typedef unsigned long long ull; 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 1000000007;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define al(arr,n) arr,arr+n
#define sz(x) ((ll)(x).size())
 
struct Point 
{ 
	ll x, y;
}; 

int orientation(Point p1, Point p2, Point p3) 
{
	int val = (p2.y - p1.y) * (p3.x - p2.x) - 
			(p2.x - p1.x) * (p3.y - p2.y); 

	if (val == 0) return 0;

	return (val > 0)? 1: 2;
} 

bool validProjection(int a , int b , int c , int d){
	if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    return max(a, c) <= min(b, d);
}

bool doIntersect(Point a , Point b , Point c , Point d)
{
	int o1 = orientation(a , b , c);
	int o2 = orientation(a , b , d);
	int o3 = orientation(c , d , a);
	int o4 = orientation(c , d , b);
	
	if(o1 != o2 && o3 != o4) return true;
	
	if(o1 == 0 && o4 == 0){
		if(validProjection(a.x , b.x , c.x , d.x) && validProjection(a.y , b.y , c.y , d.y)) return true;
	}
	
	return false;
}

void solve()
{ 
 
	Point p1 = {10, 0}, p2 = {0, 10}, p3 = {0, 0} , p4 = {10 , 10}; 
	cout<<doIntersect(p1 , p2 , p3 , p4);
}

int main()
{
 fast_cin();
 ll t=1;
//  cin >> t;
 for(int it=1;it<=t;it++) {
 solve();
 }
 return 0;
}