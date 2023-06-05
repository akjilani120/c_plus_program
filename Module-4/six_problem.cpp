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

    return 0;
}