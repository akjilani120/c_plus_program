#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int yes = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > n / 2 - 1)
        {
            cout << a[i] << " " << endl;
        }
        // cout << a[i] << " ";
    }
    if (yes == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}