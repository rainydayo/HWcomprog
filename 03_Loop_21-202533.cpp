#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string pw;
    while (2>1){
        int a;
        getline(cin, pw);
        if (pw.length() == 0){
            break;
        }
        for (int i=0; i < pw.length(); i++){
            if (pw[i] >= 65 && pw[i] <= 90){
                pw[i] = 'U';
            } else if (pw[i] >= 97 && pw[i] <= 122){
                pw[i] = 'L';
            } else if (pw[i] >= 48 && pw[i] <= 57){
                pw[i] = 'N';
            } else {
                pw[i] = 'S';
            }
        }
        if (pw.length() >= 12 && pw.find('U') != string::npos && pw.find('N') != string::npos && pw.find('L') != string::npos && pw.find('S') != string::npos){
            cout << ">> strong" << endl;
        } else if (pw.length() >= 8 && pw.find('U') != string::npos && pw.find('N') != string::npos && pw.find('L') != string::npos){
            cout << ">> weak" << endl;
        } else {
            cout << ">> invalid" << endl;
        }
    }
}