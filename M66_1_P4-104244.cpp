#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

long long pow(int m, int n){
    long long a = 1;
    for(int i=0; i < n; i++){
        a *= m;
    }
    return a;
}

bool prime(long long num){
    bool res = true;
    long long a = sqrt(num);
    if(num == 0){res = false;} else if(num%2 == 0){res = false;}
    else if(num >= 4){
    for(int i = 3; i <= a; i+=2){
        if(num%i == 0){
            res = false;
            break;
        }
    }
    }
    return res;
}

long long decode(int a, int b, int c, int d){
    long long num = 0;
    for(int i = 0; i < d; i++){
        num += c*pow(10, i);
    }
    for(int i = d; i < b+d; i++){
        num += a*pow(10, i);
    }
    return num;
}
int main() {
    int n, a, b, c, d;
    cin >> n;
    string arr[n] = {};
    for(int i=0; i<n; i++){
        cin >> a >> b >> c >> d;
        if(prime(decode(a,b,c,d))){
            arr[i] = "YES";
        } else {
            arr[i] = "NO";
        }
    }
    for(int i=0; i < n; i++){
        cout << arr[i] << endl;
    }
}