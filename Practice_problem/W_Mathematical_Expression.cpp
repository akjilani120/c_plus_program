#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char p, q;
    cin >> a >> p >> b >> q >> c;
    if (p == '+' && q == '=')
    {
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int sum = a + b;
            cout << sum << endl;
        }
    }
    else if (p == '-' && q == '=')
    {
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int sum = a - b;
            cout << sum << endl;
        }
    }
    else if (p == '*' && q == '=')
    {
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int sum = a * b;
            cout << sum << endl;
        }
    }

    return 0;
}