#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100] = "Abdul Kader Jilani";
    int roll = 20;
};
Student fun()
{
    Student josim;
    return josim;
}
int main()
{
    Student mydata = fun();
    cout << mydata.name;
    return 0;
}