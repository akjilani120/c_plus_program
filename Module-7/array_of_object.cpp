#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i].roll >> a[i].marks;
        getline(cin, a[i].name);
        }
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << endl;
        cout << a[i].roll << endl;
        cout << a[i].marks << endl;
    }

    return 0;
}