#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;

int main() {
    double k, num, count;
    set<double> s1 = {};
    cin >> k;
    while(cin >> num){
        if(num <= k){
            s1.insert(num);
        }
    }
    for(int e : s1){
        if(e >= k/2){break;}
        else{if(s1.find(k-e) != s1.end()){
            count++;
        }
        }
    }
    cout << count;
}
