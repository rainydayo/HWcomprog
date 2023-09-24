#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, w, x, y, z;
    cin >> a >> b >> c >> d;
    w = a;
    x = b;
    y = c;
    z = d;
    if (a > b){
        w = b;
        x = a;
        if (z < w){
            y += w;
            x = w + y + z;
        } else {
            if (y > z){
                y -= w;
                x = w + y + z;
            } else {
                x = w + y + z;
            }
        }
    } else {
        if (c > a && a >= b){
            z += w;
            if (z > y){
                x += 2;
            } else {
                x *= 2;
            }
        } else {
            if (z > y){
                x += 2;
            } else {
                x *= 2;
            }
        }
    }
    cout << w << " " << x << " " << y << " " << z;

}