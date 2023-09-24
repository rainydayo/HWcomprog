#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int year;
    cin >> year;
    int y = year - 2543;
    int x = y/4;
    int day = (y + x + 11)%7;
    cout << day;
    return 0;
}