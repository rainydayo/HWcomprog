#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    map<string, string> exped={};
    vector<string> a1={};
    int n;
    string city, id;
    cin >> n; cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, city);
        id = city.substr(0,city.find(' '));
        a1.push_back(id);
        city = city.substr(city.find(' '), city.length()-city.find(' ')-1);
        exped[id] = city;
    }
    string num;
    getline(cin, num);
    auto i = exped.find(num);
    city = (*i).second;
    vector<string> temp={};
    while(city.length() > 1){
        auto ind = city.find(' ',1);
        temp.push_back(city.substr(0,ind+1));
        city = city.substr(ind);
    }
    bool x = false;
    vector<string> a2={};
    for(auto e : exped){
        if(e.first == num){continue;}
        for(auto f : temp){
            if(e.second.find(f) != string::npos){
                a2.push_back(e.first);x=true;break;
            }
        }
    }
    if(!x){cout << ">> Not Found" << endl;}
    for(auto b : a1){
        for(auto c : a2){
            if(b == c){
                cout << ">> " << b << endl;break;
            }
        }
    }
}
