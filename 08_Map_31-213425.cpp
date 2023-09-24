#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void insort(vector<float> & v, float e) {
 auto itr = v.begin();
 for(auto end=v.end(); itr != end; ++itr) {
 if (*itr <= e) break;
 }
 v.insert(itr, e);
}

int main() {
    map<string, int> major={};
    int n, ppl;
    float score;
    string id, s0, s1, s2, s3, s4;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s0 >> ppl;
        major[s0] = ppl;
    }
    vector<float> v={};
    map<float, vector<string>> student={};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> id >> score >> s1 >> s2 >> s3 >> s4;
        insort(v, score);
        student[score].push_back(id);
        student[score].push_back(s1);
        student[score].push_back(s2);
        student[score].push_back(s3);
        student[score].push_back(s4);
    }
    set<string> res={};
    for(auto e : v){
        string a = student[e][0]; a += " ";
        for(int i=1; i<=4; i++){
            if(major[student[e][i]] > 0){
                a += student[e][i];
                major[student[e][i]]--;
                break;
            }
        }
        res.insert(a);
    }
    for(auto k : res){
        cout << k << endl;
    }
}
