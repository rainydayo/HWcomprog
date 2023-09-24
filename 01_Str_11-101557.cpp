#include <iostream>
#include <iostream>
using namespace std;

int main() {
    string idNum;
    cin >> idNum;
    int digits[12];
    for (int i = 0; i < 12; ++i) {
        digits[i] = idNum[i] - '0';
    }
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += (13 - i) * digits[i];
    }
    int checkDigit = (11 - (sum % 11)) % 10;
    cout << digits[0] << "-";
    cout << digits[1] << digits[2] << digits[3] << digits[4] << "-";
    cout << digits[5] << digits[6] << digits[7] << digits[8] << digits[9] << "-";
    cout << digits[10] << digits[11] << "-";
    cout << checkDigit << endl;
    return 0;
}