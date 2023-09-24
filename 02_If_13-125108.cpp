#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a <= b && a <= c && a <= d) {
        a = 0;
    } else if (b <= a && b <= c && b <= d) {
        b = 0;
    } else if (c <= a && c <= b && c <= d) {
        c = 0;
    } else if (d <= b && d <= c && d <= a) {
        d = 0;
    }

    if (a >= b && a >= c && a >= d) {
        a = 0;
    } else if (b >= a && b >= c && b >= d) {
        b = 0;
    } else if (c >= a && c >= b && c >= d) {
        c = 0;
    } else if (d >= b && d >= c && d >= a) {
        d = 0;
    }
    double score = round(((a + b + c + d)/2)*100.0)/100.0;
    cout << score;
}