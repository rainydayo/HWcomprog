#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
using namespace std;
void insort(vector<int> & v, int e) {
 auto itr = v.begin();
 for(auto end=v.end(); itr != end; ++itr) {
 if (*itr >= e) break;
 }
 v.insert(itr, e);
}
int main() {
    string a, b;
    vector<int> v = {};
    vector<int> s = {};
    getline(cin, a);
    getline(cin, b);
    for(char e : a){
        if((e >='A'&&e <='Z') || (e >= 'a' && e <='z')){
            if(e > 90){e -= 32;}
            insort(v,e);
        } 
    }
    for(char e : b){
        if((e >='A'&&e <='Z') || (e >= 'a' && e <='z')){
            if(e > 90){e -= 32;}
            insort(s,e);
        }
    }
    if(v == s){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
