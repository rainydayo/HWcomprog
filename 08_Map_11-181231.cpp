#include <iostream>
#include <string>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int main() {
    map<string, string> name={};
    map<string, string> nick={};
    int n;
    string word, temp;
    cin >> n;
    for(int i=0;i<2*n;i++){
        cin >> word;
        if(i%2==0){
            temp = word;
        } else {
            name[temp] = word;
            nick[word] = temp;
        }
    }
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> word;
        auto j = name.find(word);
        auto k = nick.find(word);
        if(j != name.end()){
            cout << (*j).second << endl;
        } else if(k != nick.end()){
            cout << (*k).second << endl;
        } else {cout << "Not found" << endl;}
    }
}

