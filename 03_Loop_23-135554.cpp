#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int x;
    int count = 0;
    cin >> a >> x;
    char ind = a[0];    
    for (int i = 0; i <= a.length(); i++) {
        if (i == a.length() || a[i] != ind) {
            if (count < x) {
                for (int j = 0; j < count; j++) {
                    cout << ind;
                }
            }
            if (i < a.length()) {
                count = 1;
                ind = a[i];
            }
        } else {
            count++;
        }
    }
}