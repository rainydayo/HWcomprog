#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    double arr[N] = {};
    for (int i=0; i<N; ++i) {
        double m;
        cin >> m;
        arr[i] = m;
    }
    int count = 0;
    for (int i = 1;i < N-1;i++){
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            count += 1;
        }
    }
    cout << count;
}