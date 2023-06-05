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
Person fun()
{
    char name[100] = "abdul kader jilani";
    Person rohim(30, 7, 'A', name);
    return rohim;
}
int main()
{

    Person rohim = fun();
    cout << rohim.name << endl;
    cout << rohim.roll << endl;
    return 0;
}