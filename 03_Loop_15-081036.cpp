#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i] == '('){
            s[i] = '[';
            count += 1;
        } else if (s[i] == ')'){
            s[i] = ']';
            count += 1;
        } else if (s[i] == ']'){
            s[i] = ')';
            count += 1;
        } else if (s[i] == '['){
            s[i] = '(';
            count += 1;
        }
    }
        cout << s;
    
}