#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a = "hello world";
    // check string size
    // cout << a.size() << endl;
    // check string capacity
    // cout << a.capacity() << endl;
    string s;
    // cout << s << endl;
    //  clear the string
    // s.clear();
    // cout << s.size() << endl;
    // if (s.empty() == true)
    // {
    //     cout << "Empty";
    // }
    // else
    // {
    //     cout << "Not Empty";
    // }
    a.resize(20, 'x');
    cout << a << endl;
    return 0;
}