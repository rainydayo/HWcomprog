#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int a, b, c, d;
    int x = -pow(2,30);
    int y = pow(2, 30) -1;
    b = x; c = y;
    for (int i = 1; i > 0; i++){
        cin >> a;
        if (a == -998 || a == -999){
            d = a;
            break;
        }
        if ((i-2)%4 == 0 || (i-3)%4 == 0){
            if (a > x){
                x = a;
            }
            if (a < y){
                y = a;
            }
        } else {
            if (a > b){
                b = a;
            }
            if (a < c){
                c = a;
            }
        }
    }
    if (d == -998){
        cout << c << " " << x;
    } else if (d == -999){
        cout << y << " " << b;
    }
}