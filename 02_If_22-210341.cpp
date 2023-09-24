#include <cmath>
#include <iostream>
using namespace std;
int noleap(int month) {
    if (month == 1) return 0;
    if (month == 2) return 31;
    if (month == 3) return 59;
    if (month == 4) return 90;
    if (month == 5) return 120;
    if (month == 6) return 151;
    if (month == 7) return 181;
    if (month == 8) return 212;
    if (month == 9) return 243;
    if (month == 10) return 273;
    if (month == 11) return 304;
    if (month == 12) return 334;
    return 0;
}
int leap(int month) {
    if (month == 1) return 0;
    if (month == 2) return 31;
    if (month == 3) return 60;
    if (month == 4) return 91;
    if (month == 5) return 121;
    if (month == 6) return 152;
    if (month == 7) return 182;
    if (month == 8) return 213;
    if (month == 9) return 244;
    if (month == 10) return 274;
    if (month == 11) return 305;
    if (month == 12) return 335;
    return 0;
}
int main() {
    int day, moon, num, daynum;
    cin >> day >> moon >> num;
    int year = num - 543;
    if (year%4 != 0 || year%100 == 0 && year%1000 != 0){
        int daynum = day + noleap(moon);
        cout << daynum;
    } else {
        int daynum = day + leap(moon);
        cout << daynum;
    }
}