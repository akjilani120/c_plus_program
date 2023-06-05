#include <bits/stdc++.h>
using namespace std;
// Thi is class
class Car
{
public:
    char nameOfCar[100];
    int price;
    int sit;
    int width;
    // This is constructor in class
    // Car(int p, int s, int w, char *n)
    // {
    //     strcpy(nameOfCar, n);
    //     price = p;
    //     sit = s;
    //     width = w;
    // }
};
int main()
{
    // This is object
    Car bmw;
    bmw.price = 10;
    bmw.sit = 11;
    bmw.width = 20;
    char nm[100] = "BMW W12";
    strcpy(bmw.nameOfCar, nm);

    return 0;
}