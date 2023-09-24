#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, m, a = 200000000, b = -200000000, c = 200000000, d = -200000000;
    string order;
    cin >> n;
    int arr[n*2] = {};
    for(int i = 0; i < n*2; i++){
        cin >> m;
        if(i%4 == 0 || i%4 == 3){
            if(m >= b){
                b = m;
            }
            if(m <= a){
                a = m;
            }
        } else {
            if(m >= d){
                d = m;
            }
            if(m <= c){
                c = m;
            }
        }
    }
    cin.ignore();
    getline(cin, order);
    if(order == "Zig-Zag"){
        cout << a << " " << d;
    } else if ( order == "Zag-Zig"){
        cout << c << " " << b;
    }
}