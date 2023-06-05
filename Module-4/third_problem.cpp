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
    char name[100] = "abdul kader jilani";
    Person *rohim = new Person(30.25, 7, name);
    char name[100] = "abdul kader jilani";
    Person *rohim = new Person(30.25, 7, name);
    cout << rohim->name << endl;
    cout << rohim->hight << endl;
    cout << rohim->age << endl;

    return 0;
}