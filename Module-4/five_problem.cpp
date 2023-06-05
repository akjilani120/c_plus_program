#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
        char name[100];
    float hight;
    int age;

    Person(float h, int a, char *n)
    {
        strcpy(name, n);
        hight = h;
        age = a;
    }
};
int main()
{
    char name[100] = "Abdul Kader Jilani";
    Person jilani(5.4, 25, name);
    char name2[100] = "Abu Bokkor Siddik";
    Person kader(5.3, 20, name2);
    if (jilani.age > kader.age)
    {
        cout << jilani.name << endl;
    }
    else
    {
        cout << kader.name << endl;
    }

    return 0;
}