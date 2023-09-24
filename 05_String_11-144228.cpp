#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string code;
    while(getline(cin, code)){
        int x = 0;
        char a = 'A';
        for(char i : code){
            if((i >= 33 && i <= 47 && i != 45) || (i >= 58 && i <= 64) || (i >= 91 && i <= 96) || (i >= 123 && i <= 126)){
                if(x == 0){
                    a = i;
                    x = 1;
                }
            } 
            if(i == a){
                if(x == 1){
                    x = 2;
                } else if(x == 2){
                    x = 1;
                }
            }
            if(x == 2 && i != a){
                cout << i;
            }
        }
        cout << endl;
    }
}