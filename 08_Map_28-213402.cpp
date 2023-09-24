#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <set>
#include <map>
using namespace std;

string printval(vector<vector<string>> song, string e){
    string ans = "";
    for(auto i : song){
        if(i[0] == e){
            ans += i[1];
            ans += ", ";
        }
    }
    if(ans.length() > 0){
        return ans.substr(0,ans.length()-2);
    } else {
        return ans = "Not found";
    }
    return 0;
}

int main() {
    vector<vector<string>> song={};
    int n;
    string line, name;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, line);
        vector<string> a={};
        name = line.substr(0,line.find(','));
        a.push_back(name);
        a.push_back(line.substr(line.find(',')+2));
        song.push_back(a);
    }
    getline(cin, line);
    auto start = 0, end = 0;
        while (end != string::npos) {
            end = line.find(',', start);
            string substring;
            if (end != string::npos) {
                substring = line.substr(start, end - start);
                start = end + 2;
                cout << substring << " -> " << printval(song, substring) << endl;
            } else {
                substring = line.substr(start);
                cout << substring << " -> " << printval(song, substring) << endl;
            }
        }
}