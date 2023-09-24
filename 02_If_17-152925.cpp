#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int weigth;
    cin >> weigth;
    if (weigth > 2000){
        cout << "Reject";
    } else if (weigth <= 2000 && weigth > 1000){
        cout << "58";
    } else if (weigth <= 1000 && weigth > 500){
        cout << "38";
    } else if (weigth <= 500 && weigth > 250){
        cout << "28";
    } else if (weigth <= 250 && weigth > 100){
        cout << "22";
    } else {
        cout << "18";
    }
}  