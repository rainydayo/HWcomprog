#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    string a;
    if (num < 0){
        cout << "negative" << endl;
    } else if (num == 0){
        cout << "zero" << endl;
    } else {
        cout << "positive" << endl;
    }

    if (num%2 == 0){
        cout << "even";
    } else {
        cout << "odd";
    }
}   