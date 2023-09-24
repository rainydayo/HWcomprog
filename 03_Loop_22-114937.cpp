#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;   
    while (num % 2 == 0) {
        cout << 2;
        num /= 2;
        if (num > 1) {
            cout << "*";
        }
    }   
    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            cout << i;
            num /= i;
            if (num > 1) {
                cout << "*";
            }
        }
    }  
    if (num > 2) {
        cout << num;
    }
}