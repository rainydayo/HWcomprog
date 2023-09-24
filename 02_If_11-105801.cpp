#include <cmath>
#include <iostream>
using namespace std;
int main() {
    string faculty;
    cin >> faculty;
    if (faculty == "01" || faculty == "02" || faculty == "20" || faculty == "21" || faculty == "22" || faculty == "23" || faculty == "24" || faculty == "25" || faculty == "26" || faculty == "27" || faculty == "28" || faculty == "29" || faculty == "30" || faculty == "31" || faculty == "32" || faculty == "33" || faculty == "34" || faculty == "35" || faculty == "36" || faculty == "37" || faculty == "38" || faculty == "39" || faculty == "40" || faculty == "51" || faculty == "53" || faculty == "55" || faculty == "58"){
        cout << "OK";
    } else {
        cout << "Error";
    }
}