#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;

int main() {
    bool stat = true;
    int num;
    set<int> all;
    vector<int> reminder;

    while(cin >> num){
        if(stat){
            if(all.find(num) != all.end()){
                stat = false;
            } else {
                all.insert(num);
            }
        } else if(!stat && reminder.size() < 2){
            reminder.push_back(num);
        }
    }

    if(reminder.size() > 0){
        cout << all.size()+1;
    } else {
        cout << -1;
    }
}
