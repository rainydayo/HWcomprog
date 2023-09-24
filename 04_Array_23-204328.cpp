#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int n, k = 0, money = 0;
    string order, start, index;
    cin >> n;
    string country[n] = {};
    int fee[n] = {};
    cin.ignore();
    for (int i=0; i<n; ++i) {
        string m;
            getline(cin, m);
            country[i] = m.substr(0,2);
            fee[i] = stoi(m.substr(3));
        }
    cin.ignore();
    getline(cin, order);
    string fly[(order.length()+1)/7] = {};
    for (int i = 0;i < (order.length()+1)/7; i++){
        start = order.substr(7*i+3 , 2);
        fly[i] = start;
    }
    index = fly[0];
    for (int i=0; i < (order.length()+1)/7; i++){
        if (fly[i] != index){
            for (int j = 0; j < n; j++){
                if (country[j] == fly[i]){
                    k = j;
                    break;
                }
            }
            money += fee[k];
        }
        index = fly[i];
    }
    if (order.substr(order.length()-9 , 2) != order.substr(order.length()-2)){
        for (int j = 0; j < n; j++){
            if (country[j] == order.substr(order.length()-2)){
                k = j;
                break;
            }
        }
        money += fee[k];
    }
    cout << money << endl;
}