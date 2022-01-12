#include <iostream>
#include <set>
using namespace std;
int main()
{

  set<string> s;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string str;
    cin >> str;
    s.insert(str);
  }
  for (auto x : s)
  {
    cout << x << endl;
  }

  return 0;
}