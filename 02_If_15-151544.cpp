#include <cmath>
#include <iostream>
using namespace std;
int main() {
    string phonenum;
    cin >> phonenum;
    if (phonenum.length() == 10){
        if (phonenum.substr(0,2) == "06" || phonenum.substr(0,2) == "08" || phonenum.substr(0,2) == "09"){
            cout << "Mobile number";
        } else {
            cout << "Not a mobile number";
        }
    } else {
        cout << "Not a mobile number";
    }
    
}   