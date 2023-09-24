#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n;
    string order;
    cin >> n;
    string arr[n] = {};
    for (int i=0; i<n; ++i) {
        string m;
            cin >> m;
            arr[i] = m;
        }
    cin.ignore();
    getline(cin, order);
    for (int i=0; i< order.length(); i++){
        string rest[n] = {};
        if (order[i] == 'C'){
            for (int i = 0; i<n; i++){
                if (i < n/2){
                    rest[i+n/2] = arr[i];
                } else {
                    rest[i-n/2] = arr[i];
                }
            }
            for (int i = 0;i < n; i++){
                arr[i] = rest[i];
            }
        } else if (order[i] == 'S'){
            for (int i = 0; i<n; i++){
                if (i < n/2){
                    rest[2*i] = arr[i];
                } else {
                    rest[2*(i-n/2)+1] = arr[i];
                }
            }
            for (int i = 0;i < n; i++){
                arr[i] = rest[i];
            }
        }
    }
    for (int i = 0; i < n;i++){
        if (i == 0){
            cout << arr[0];
        } else {
            cout << " " << arr[i];
        }
    }   
}