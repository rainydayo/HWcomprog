#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string x, line;
    char b = 'R';
    int y = 0;
    getline(cin, line);
    int turn = stoi(line);
    while (2>1){
        int a = 0, index = 0,uwu;
        if (y == turn){
            break;
        }
        y += 1;
        getline(cin, x);
        if (x[0] != 'R'){
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        for (int j = 2; j < x.length();j+=4){
            if (x[j] == 'R'){
                cout << "WRONG_INPUT" << endl;
                a = 3;
                break;
            }
        }
        if (a == 3){
            continue;
        }
        for (int j = 2; j < x.length();j+=2){
            if (x[j] == 'R' && x[j+2] == b){
                cout << "WRONG_INPUT" << endl;
                a = 3;
                break;
            }
        }
        if (a == 3){
            continue;
        }
        if ((x.find("Y G N B P K") != x.length()-11 && x.find("Y G N B P K") != string::npos)){
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        while (index != string::npos){
            uwu = index;
            index = x.find('R', uwu+1);
        }
        if (x[x.length()-1] == 'R' || x[x.length()-3] == 'R'){
            a = 1;
        } else if (x.substr(uwu+4)=="Y G N B P K" || x.substr(uwu+4)=="Y G N B P" || x.substr(uwu+4)=="Y G N B" || x.substr(uwu+4)=="Y G N" || x.substr(uwu+4)=="Y G" || x.substr(uwu+4)=="Y"){
            a = 1;
        }
        
        int score = 0;
        if (a == 1){
        for (int i = 0; i < x.length(); i+=2){
            if (x[i] == 'R'){
                score += 1;
            } else if (x[i] == 'Y'){
                score += 2;
            } else if (x[i] == 'G'){
                score += 3;
            } else if (x[i] == 'N'){
                score += 4;
            } else if (x[i] == 'B'){
                score += 5;
            } else if (x[i] == 'P'){
                score += 6;
            } else if (x[i] == 'K'){
                score += 7;
            }
        } cout << score << endl;
        } else {
            cout << "WRONG_INPUT" << endl; 
        }
    }
}