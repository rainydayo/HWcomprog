#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a, x, L, U;
    cin >> a;
    L = 0;
    U = a;
    x = (L + U) / 2;
    while (abs(a - pow(10, x)) > (pow(10, -10)) * max(a, x*x)) {
        if (pow(10, x) > a) {
            U = x;
        } else {
            L = x;
        }
        x = (L + U) / 2;
    }

    cout << x << endl;

}