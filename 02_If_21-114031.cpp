#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long view;
    cin >> view;
    if (view/1000000000 >= 1){
        double n = view/1000000000.0;
        if (n < 10){
            double num = round(n*10)/10.0;
            cout << num << "B";
        } else {
            double num = round(n);
            cout << num << "B";
        }
    } else if (view/1000000 >= 1){
        double n = view/1000000.0;
        if (n < 10){
            double num = round(n*10)/10.0;
            cout << num << "M";
        } else {
            double num = round(n);
            cout << num << "M";
        }
    } else if (view/1000 >= 1){
        double n = view/1000.0;
        if (n < 10){
            double num = round(n*10)/10.0;
            cout << num << "K";
        } else {
            double num = round(n);
            cout << num << "K";
        }
    } else if (view/1 >= 1){
        double n = view/1.0;
        if (n < 10){
            double num = round(n*10)/10.0;
            cout << num;
        } else {
            double num = round(n);
            cout << num;
        }
    }
}