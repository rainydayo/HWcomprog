#include <iostream>
#include <cmath>
using namespace std;

string monthconvert(string month) {
    if (month == "01") return "JAN";
    if (month == "02") return "FEB";
    if (month == "03") return "MAR";
    if (month == "04") return "APR";
    if (month == "05") return "MAY";
    if (month == "06") return "JUN";
    if (month == "07") return "JUL";
    if (month == "08") return "AUG";
    if (month == "09") return "SEP";
    if (month == "10") return "OCT";
    if (month == "11") return "NOV";
    if (month == "12") return "DEC";
    return "";
}

int main() {
    string datenum;
    cin >> datenum;
    string day = datenum.substr(0,2);
    if (datenum[0] == '0') {
        day = datenum[1];
    }
    string month = datenum.substr(3,2);
    string year = datenum.substr(6,4);
    int number = 0;
    for (char c : year) {
        if (c >= '0' && c <= '9') {
            number = number * 10 + (c - '0');    }
    }
    int realyear = number - 543;
    string realmonth = monthconvert(month);
    cout << realmonth << " " << day << ", " << realyear;
    return 0;
}