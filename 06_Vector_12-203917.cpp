#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
int main() {
    vector<int> all;
    int n;
    cin >> n;
    all.push_back(n);
    while(n != 1){
        if(n%2 == 1){
        n = 3*n + 1;} else {n/=2;}
        all.push_back(n);
    }
    if(all.size() > 15){
        cout << all[all.size()-15];
        for(int i =all.size()-14; i < all.size(); i++){
            cout << "->" << all[i];
        }
    } else {
        cout << all[0];
        for(int i =1; i<all.size(); i++){
            cout << "->" << all[i];
        }
    }
    return 0;
}