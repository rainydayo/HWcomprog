#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int modm(int a, int k, int m) {
    if (k == 0) return 1;   
    long long half = modm(a, k / 2, m);
    half = (half * half) % m;   
    if (k % 2 == 1) {
        half = (half * a) % m;
    }    
    return half;
}

int main() {
    int a, k, m;
    cin >> a >> k >> m;
    cout << modm(a,k,m);
    return 0;
}