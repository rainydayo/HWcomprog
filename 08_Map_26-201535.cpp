#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    map<string, vector<string>> station={};
    string first, second="", line, want;
    while(getline(cin, line)){
        if(line.find(' ') != string::npos){
            first = line.substr(0,line.find(' '));
            second = line.substr(line.find(' ')+1);
            station[first].push_back(second);
            station[second].push_back(first);
        } else {
            want = line;
            break;
        }
    }
    set<string> b={}; b.insert(want);
    auto k = station.find(want);
    if(k != station.end()){
        for(auto e : (*k).second){
            b.insert(e);
            auto m = station.find(e);
            if(m != station.end()){
                for(auto f : (*m).second){
                    b.insert(f);
                }
            }
        }
    }
    for(auto h : b){
        cout << h << endl;
    }
}
