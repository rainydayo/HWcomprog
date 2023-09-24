#include <iostream>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
int main() {
    vector<int> all;
    int n, m;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> m;
        all.push_back(m);
    } 
    while(cin >> m){
        if(m == -1){
            break;
        }
        all.push_back(m);
    }
    if(all.size() == 0){
        cout << "[]";
    } else {
    cout << "[";
    if(all.size()%2 == 0){
        cout << all[all.size()-1];
        for(int i=all.size()-3; i>=0; i-=2){
        cout << ", " << all[i];
        }
        for(int i=0; i<all.size();i+=2){
            cout << ", " << all[i];
        }
    } else {
        cout << all[all.size()-2];
        for(int i=all.size()-4; i>=0; i-=2){
        cout << ", " << all[i];
        }
        for(int i =0; i<all.size(); i+=2){
            cout << ", "<< all[i];
        }
    }
    cout << "]";
    }
    return 0;
}