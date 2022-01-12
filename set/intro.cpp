#include <iostream>
#include <set>
using namespace std;
int main()
{

    int arr[] = {1, 22, 3, 3, 10, 11, 9, 8, 6, 2, 22};
    int n = sizeof(arr) / sizeof(int);
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    //printing the set elements

    for (set<int>::iterator i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}