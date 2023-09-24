#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main() {
    map<string, float> currency = {};
    currency["THB"] = 1;
    int n;float money;
    string name, country;
    cin >> n;
    for(int i=0; i<n*2; i++){
        if(i%2==0){cin >> name;country = name;}
        else {cin >> money; currency[country] = money;}
    }
    cin.ignore();
    getline(cin, name);
    int ind = name.find(' ');
    int start = stoi(name.substr(0,ind));
    string temp1 = name.substr(ind+1, 3);
    float temp2;
    cout << start << " ";
    for(int i=0; i<name.substr(ind).length()/4; i++){
        auto j = currency.find(name.substr(ind+i*4+1, 3));
        if(i==0){
            cout << name.substr(ind+i*4+1, 3);
            temp2 = (*j).second;
        } else {
            start = int((temp2 * start) / (*j).second);
            temp1 = name.substr(ind+i*4+1, 3);
            temp2 = (*j).second;
            cout << " -> " << start << " " << temp1;
        }
    }
}