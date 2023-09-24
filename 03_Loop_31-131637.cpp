#include <cmath>
#include <iostream>
#include <string>
using namespace std;
long long pow(int m,int n){
    long long a = 1;
    for(int i = 0; i < n; i++){
        a *= m;
    }
    return a;
}
long long count(long long x){
    long long m = 1;
    int n = 1;
    while (x >= pow(10, n)){
        m += n*9*pow(10, n-1);
        n++;
    }
    m += n*(x-pow(10, n-1)+1);
    return m;
}

int main() {
    long long x, y;
    long long z = 0;
    int a, b;
    cin >> x >> y;
    cout << count(y)-count(x)+to_string(x).length();
    
}