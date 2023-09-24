#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n, count = 0, k = 0, zero = 0;
    cin >> n;
    int arr[n][n] = {};
    int num[n*n] = {};
    for(int i=0; i < n; i++){
        for(int j =0; j < n; j++){
            int m;
            cin >> m;
            if(m == 0){
                zero = i;
            }
            arr[i][j] = m;
            num[i*n+j] = m;
        }
    }
    for(int i = 0; i<n*n-1;i++){
        for(int j = i+1; j < n*n;j++){
            if(num[i] != 0 && num[j] != 0){
                if(num[i] > num[j]){
                    count += 1;
                }
            }
        }
    }
    if(n%2 == 1){
        if(count%2 == 0){
            k = 1;
        }
    } else {
        if(count%2 == 0){
            if(zero%2 == 1){
                k = 1;
            }
        } else {
            if(count%2 == 1){
                if(zero%2 == 0){
                    k = 1;
                }
            }
        }
    }
    if(k == 1){
        cout << "YES";
    } else {
        cout << "NO";
    }
}