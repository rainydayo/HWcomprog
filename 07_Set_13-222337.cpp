#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;

int main() {
    int ind;
    string winner, loser, wtfamidoing = "";
    set<string> win = {};
    set<string> lose = {};
    while(cin >> winner >> loser){
        win.insert(winner);
        lose.insert(loser);
    }
    for(string e : win){
        ind = 0;
        for(string k : lose){
            if(e == k){
                ind = 1;
            }
        }
        if(ind == 0){
            wtfamidoing += e;
            wtfamidoing += " ";
        }
    }
    if(wtfamidoing.length() > 0){
    cout << wtfamidoing.substr(0, wtfamidoing.length()-1);} else {cout << "None";}
}