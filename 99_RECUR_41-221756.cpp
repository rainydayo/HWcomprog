#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> warp(const set<vector<int>>& station, int start, int end) {
    vector<vector<int>> result;
    for (const auto& e : station) {
        if (e[0] == start) {
            if (e[1] == end) {
                result.push_back({start, end});
            } else {
                auto sub = warp(station, e[1], end);
                for (auto path : sub) {
                    path.insert(path.begin(), start);
                    result.push_back(path);
                }
            }
        }
        if (e[0] > start) {
            break;
        }
    }  
    return result;
}

int main() {
    int n, start, end, a, b;
    cin >> n >> start >> end;
    set<vector<int>> station = {};
    for(int i=0; i<n; i++){
        vector<int> x = {};
        cin >> a >> b;
        x.push_back(a);
        x.push_back(b);
        station.insert(x);
    }
    if (!warp(station, start, end).empty()) {
        for (auto path : warp(station, start, end)) {
            string temp = "";
            for (int p : path) {
                temp += " -> ";
                temp += to_string(p);
            }
            temp = temp.substr(4);
            cout << temp << endl;
        }
    } else {
        cout << "no" << endl;
    }
}