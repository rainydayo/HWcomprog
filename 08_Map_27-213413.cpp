#include <iostream>
#include <string>
#include <map>
using namespace std;

string printnum(map<int, string> numpad, char e) {
    string ans = "";
    if (e <= 'Z' && e >= 'A') {
        e += 32;
    }    
    if ((e >= 'a' && e <= 'z') || e == ' ') {
        for (auto i : numpad) {
            for (int j = 0; j < i.second.length(); j++) {
                if (e == i.second[j]) {
                    for (int k = 0; k <= j; k++) {
                        ans += to_string(i.first);
                    }
                }
            }
        }
    }
    return ans;
}

char printkey(map<int, string> numpad, string e) {
    int key = e[0] - '0';
    int presses = e.length();
    if (numpad.count(key) > 0 && presses <= numpad[key].size()) {
        return numpad[key][presses - 1];
    }
    return ' ';
}

int main() {
    map<int, string> numpad = {{0, " "},{2, "abc"},{3, "def"},{4, "ghi"},{5, "jkl"},{6, "mno"},{7, "pqrs"},{8, "tuv"},{9, "wxyz"}};
    string word;
    while (getline(cin, word)) {
        if (word.substr(0, 3) == "T2K") {
            cout << ">>";
            for (char e : word.substr(4)) {
                cout << " " << printnum(numpad, e);
            }
            cout << endl;
        } else {
            cout << ">>";
            auto start = 0, end = 0;
            while (end != string::npos) {
                end = word.find(' ', start);
                string substring;
                if (end != string::npos) {
                    substring = word.substr(start, end - start);
                    start = end + 1;
                } else {
                    substring = word.substr(start);
                }
                cout << printkey(numpad, substring);
            }
            cout << endl;
        }
    }
}