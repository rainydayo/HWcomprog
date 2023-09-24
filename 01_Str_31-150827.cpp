#include <iostream>
#include <cmath>
using namespace std;

long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}


int main() {
    int x;
    string y, z;
    cin >> x >> y >> z;
    int lengthy = y.length();
    int lengthz = z.length();
    string up = y+z;
    int numbery = 0;
    for (char c : y) {
        if (c >= '0' && c <= '9') {
            numbery = numbery * 10 + (c - '0');
        }
    }
    int numberup = 0;
    for (char c : up) {
        if (c >= '0' && c <= '9') {
            numberup = numberup * 10 + (c - '0');
        }
    }
    int realup = numberup - numbery;

    std::string yy = "";
    for (int i = 0; i < lengthz; ++i) {
        yy += "9";
    }
    int numy = 0;
    for (char c : yy) {
        if (c >= '0' && c <= '9') {
            numy = numy * 10 + (c - '0');
        }
    }
    int realdown = numy*(pow(10, lengthy));
    int downdown = realdown/gcd(realup, realdown);
    int upup = (realup/gcd(realup, realdown)) + (x*downdown);
    
    cout << upup << " / " << downdown;

    return 0;
}