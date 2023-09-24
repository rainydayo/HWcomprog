#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i=0; i<n; ++i) {
        double m;
        cin >> m;
        arr[i] = m;
    }
    for (int j = 0; j < n; j++){
    double x =arr[j];
    if ( j > 0){
    for (int i = j; i > 0; i--){
        x = arr[i-1] + 1.0/x;
    }
    }
    cout << setprecision(10) << x << endl;
    }
}