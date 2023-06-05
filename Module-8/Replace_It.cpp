#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string s, x;
        cin >> s >> x;

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "$");
        }

        cout << s;
        cout << endl;
    }

    return 0;
}