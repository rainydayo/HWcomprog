#include <cmath>
#include <iostream>
#include <string>
using namespace std;
bool check(char a, char b){
    bool x = true;
    if((a >= 48 && a <= 57 && b > 57) || (b >= 48 && b <= 57 && a > 57) || (a >= 97 && a <= 122 && b >= 65 && b <= 90) || (a >= 65 && a <= 90 && b >= 65 && b <= 90)){
        x = false;
    }
    return x;
}
int main() {
    string code;
    cin >> code;
    for(int i = 0; i < code.length() - 1; i++){
            if(check(code[i], code[i+1]) == false){
                cout << code[i] << ", ";
            } else {
                cout << code[i];
            }
    }
    cout << code[code.length()-1];
}