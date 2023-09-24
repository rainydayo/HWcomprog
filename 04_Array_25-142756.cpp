#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size ; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n, stack = 0, k = 0, a, b = 0, water = 0;
    cin >> n;
    int arr[n] = {};
    int fit[n] = {};
    for (int i=0; i<n; ++i) {
        int m;
        cin >> m;
        arr[i] = m;
        fit[i] = m;
    }
    sort(fit, n);
    for(int i = fit[n-1] ; i > 0; i--){
            a = 9999;
            for(int j = 0; j < n; j++){
                if(arr[j] >= i){
                    if(a == 9999){
                        a = j;
                    } else {
                        b = (j-a-1);
                        water += b;
                        a = j;
                    }
                }
            }
        }
    cout << water;
}