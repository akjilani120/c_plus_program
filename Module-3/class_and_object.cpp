#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Person abdul;
    abdul.roll = 10;
    abdul.cls = 11;
    abdul.section = 'b';
    char nm[100] = "abdul";
    strcpy(abdul.name, nm);
    cout << abdul.name;
    return 0;
}