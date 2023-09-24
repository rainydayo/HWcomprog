#include <iostream>
#include <string>
#include <set>
#include <cmath>
using namespace std;

int stoii(string a){
    int x = 0, n=0;
    for(int i=a.length()-1; i >= 0; i--){
        if((a[i] != ' ')){
        x += (a[i]-'0')*pow(10,n);
        n++;}
    }
    return x;
}

void print(set<string> a){
    set<int> x;
    for(string e : a){
        x.insert(stoii(e));
    }
    if(x.empty()){
        cout << " empty set";
    } else {
        for(auto &e : x) {
            cout << ' ' << e;
        }
    }
    cout << endl;
}

int main() {
    string line, temp;
    set<string> U;
    set<string> I;
    set<string> D;
    
    getline(cin, line);
    line += " ";
    for(int i=0; i<line.length(); i++){
        if(line[i] == ' '){
            U.insert(temp);
            I.insert(temp);
            D.insert(temp);
            temp = "";
        } else {
            temp += string(1,line[i]);
        }
    }
    
    while(getline(cin, line)){
        temp = "";
        line += " ";
        set<string> current_line;
        for(int i=0; i<line.length(); i++){
            if(line[i] == ' ' && temp != ""){
                U.insert(temp);
                current_line.insert(temp);
                D.erase(temp);
                temp = "";
            } else {
                temp += string(1,line[i]);
            }
        }

        set<string> newI;
        for(auto &e : I) {
            if(current_line.find(e) != current_line.end()) {
                newI.insert(e);
            }
        }
        I = newI;
    }
    cout << "U:"; print(U);
    cout << "I:"; print(I);
    cout << "D:"; print(D);
}