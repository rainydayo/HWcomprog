#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter){
    vector<string> splut;
    string word = "";
    if(delimiter == '\0'){
        delimiter = ' ';
    }
    for(int i=0;i<line.length();i++){
        if(line[i] == delimiter){
            if(word.length() != 0){
            splut.push_back(word);}
            word = "";
        } else {
            word += string(1,line[i]);
        }
    }
    if(word.length()!=0){splut.push_back(word);}
    return splut;
}
int main() {
    string line, deli;
    getline(cin, line);
    getline(cin, deli);
    for (string e : split(line, deli[0])) {
    cout << '(' << e << ')';
    }
    return 0;
}