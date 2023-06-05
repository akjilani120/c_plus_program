#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int minValue = min(a, b);
    int maxValue = max(a, b);
    cout << minValue << " " << maxValue;
}