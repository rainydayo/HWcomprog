#include <iostream>
#include <string>
using namespace std;

int main() {
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char left[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string given;
    getline(cin, given);
    for (int i = 0; i < 10; i++){
        for(int j = 0; j < given.length(); j++){
            if(num[i] == given[j]){
                left[i] = 'x';
            }
        }
    }
    int h = 0;
    int g = 0;
    for (int k = 0; k<10;k++){
        if (left[k] == 'x'){
            g += 1;
        }
    }
    if (g == 10){
        cout << "None";
    }else{
    for (int i = 0; i < 10; i++){
        if (left[i] != 'x'){
            if (h == 0){
                cout << left[i];
                h = 1;
            }else{
            cout << "," << left[i];}
        }
    }
    }
}