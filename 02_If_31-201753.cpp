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
    int day1, moon1, num1, day2, moon2, num2, daynum1, daynum2, daynum3;

    cin >> day1 >> moon1 >> num1 >> day2 >> moon2 >> num2;
    int year1 = num1 - 543;
    int year2 = num2 - 543;
    if (year1%4 != 0 || year1%100 == 0 && year1%1000 != 0){
        daynum1 = 365 - (day1 + noleap(moon1));
    } else {
        daynum1 = 366 - (day1 + leap(moon1));
    }
    if (year2%4 != 0 || year2%100 == 0 && year2%1000 != 0){
        daynum2 = (day2 + noleap(moon2));
    } else {
        daynum2 = (day2 + leap(moon2));
    }
    daynum3 = 365*(year2-year1-1);
    int daynum = daynum1 + daynum2 + daynum3;
    double phy = sin((2*M_PI*daynum)/23);
    double emo = sin((2*M_PI*daynum)/28);
    double tel = sin((2*M_PI*daynum)/33);
    cout << daynum << " " <<  round(phy*100.0)/100.0 << " " <<  round(emo*100.0)/100.0 << " " <<  round(tel*100.0)/100.0;
    return 0;
}