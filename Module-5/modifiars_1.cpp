#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "hello";
    string b = "world";
    a = a + b;
    cout << a << endl;
    // add last value
    a.push_back('A');
    cout << a << endl;
    a.pop_back();
    cout << a << endl;
    return 0;
}