#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;
    year -= 543;
    int n = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11){
        n = 30;
    }
    if (month == 2){
        n = 28;
        if (year%400 == 0){
            n = 29;
        } else if (year%4 == 0 && year%100 != 0){
            n = 29;
        }
    }
    day += 15;
    if (day > n){
        day -= n;
        month += 1;
    }
    if (month > 12){
        month -= 12;
        year += 1;
    }
    year += 543;
    cout << day << "/" << month << "/" << year;
}