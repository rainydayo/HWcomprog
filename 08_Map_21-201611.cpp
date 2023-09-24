#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<vector<string>> cat={};
    string word;
    while(getline(cin, word)){
        vector<string> a={};
        int ind=0;
        for(auto &f : cat){
            if(word.substr(word.find(' ') + 1) == f[0]){
                f.push_back(word.substr(0,word.find(' ')));
                ind=1;break;
            }
        }
        if(ind == 0){
            a.push_back(word.substr(word.find(' ') + 1));
            a.push_back(word.substr(0,word.find(' ')));
            cat.push_back(a);
        }
    }
    for(auto x : cat){
        cout << x[0] << ":";
        for(int i=1; i<x.size(); i++){
            cout << " " << x[i];
        }
        cout << endl;
    }
}