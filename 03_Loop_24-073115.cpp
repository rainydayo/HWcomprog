#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string code;
    cin >> code;
    int count = 0;
    char a;
    char b = code[0];
    for (int j = 0; j < code.length(); j++) {
        a = code[j];
        if (a == b) {
            count += 1;
        } else {
            cout << b << " " << count << " ";
            b = a;
            count = 1;
        }
    }
    cout << b << " " << count;
}