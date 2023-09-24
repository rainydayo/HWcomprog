#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main() {
    map<string, string> name={};
    map<string, string> tel={};
    int n, count;
    string word, temp;
    cin >> n;cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, word);
        count = 0;
        for(int j=0;j<word.length();j++){
            if(word[j] == ' ' && count == 1){
                name[word.substr(0,j)] = word.substr(j+1);
                tel[word.substr(j+1)] = word.substr(0,j);
                break;
            } else if(word[j] == ' ' && count==0){count=1;}
        }
    }
    cin >> n;cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, word);
        cout << word << " --> ";
        auto j = name.find(word);
        auto k = tel.find(word);
        if(j != name.end()){
            cout << (*j).second << endl;
        } else if(k != tel.end()){
            cout << (*k).second << endl;
        } else {cout << "Not found" << endl;}
    }
}

