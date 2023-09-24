#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double value = 1;
    double num;
    int count = -1;
    while (num != -1){
        cin >> num;
        value += num;
        count += 1;
    }
    if (value > 0){
        cout << round((value/count)*100)/100.0;
    } else{
        cout << "No Data";
    }
    
}