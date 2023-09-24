#include <iostream>
#include <string>
using namespace std;
int main(){
    string sent;
    getline(cin, sent);
    string lower[26] = {"aA","bB","cC","dD","eE","fF","gG","hH","iI","jJ","kK","lL","mM","nN","oO","pP","qQ","rR","sS","tT","uU","vV","wW","xX","yY","zZ"};
    for(int i = 0; i < 26; i++){
        int count = 0;
        for(int j = 0; j < sent.length(); j++){
            if (lower[i][0] == sent[j] || lower[i][1] == sent[j]){
                count++;
            }
        }
        if (count > 0){
         cout << lower[i][0] << " -> " << count << endl;
        }
    }
}