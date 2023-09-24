#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double p;
    cin >> p;
    double k = 1.0;
    double t = 1.0;
    t = (t*(366-k))/365;
    while ((1-t) < p){
        k += 1;
        t = (t*(366-k))/365;
    }
    cout << k;
}