#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

void insort(map<string, int> &song, vector<pair<string, int>> &a){
    for(auto e : song){
        auto itr = a.begin();
        for(auto end=a.end(); itr != end; ++itr) {
            if ((*itr).second <= e.second) break;
        }
        a.insert(itr, e);
    }
}

int main() {
    map<string, int> song={};
    string data, genre;
    while(getline(cin, data)){
        int ind = data.find(' ');
        ind = data.find(' ', ind+1);
        genre = data.substr(ind+1, data.find(' ', ind+1)-ind-1);
        ind = data.find(' ', ind+1);
        string time = data.substr(ind + 1);
        int sec  = stoi(time.substr(0,time.find(':')))*60 + stoi(time.substr(time.find(':')+1));
        if(song.find(genre) == song.end()){
            song[genre] = sec;
        } else {
            song[genre] += sec;
        }
    }
    vector<pair<string, int>> a = {};
    insort(song, a);
    if(a.size() <= 3){
    for(auto e : a){
        cout << e.first << " --> " << e.second/60 << ":" << e.second%60 << endl;
    }
    } else {
        for(int i=0; i<3; i++){
            cout << a[i].first << " --> " << a[i].second/60 << ":" << a[i].second%60 << endl;
        }
    }
    
}
