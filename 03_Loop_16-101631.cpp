#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << ".";
        }
        cout << "*";
        if (i > 1 && i < n) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << ".";
            }
            cout << "*";
        } else if (i == n) {
            for (int j = 1; j <= 2 * i - 2; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}