#include <iostream>
#include <cmath>
#include <climits>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    long double y = INFINITY;
    int x = INT_MAX;

    double hasil = nexttoward(x, y);
    cout << "nexttoward(x, y) = " << hasil << endl;

    _getch();
    return 0;
}