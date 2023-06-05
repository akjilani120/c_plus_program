#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Person(int r, int c, char s, char *n)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};
int main()
{
    Person rohim(30, 7, 'A', "Rohim");
    cout << rohim.name;
    return 0;
}