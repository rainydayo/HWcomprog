#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, s;
    getline(cin, word);
    getline(cin, s);
    int count = 0;
    int index = s.find(word);
    while (index != string::npos){
        if (((s[index-1] == ' ' ||  s[index-1] == '\"' || s[index-1] == '(' || s[index-1] == ')' || s[index-1] == ',' || s[index-1] == '.' || s[index-1] == '\'') && (s[index+word.length()] == ' ' ||  s[index+word.length()] == '\"' || s[index+word.length()] == '(' || s[index+word.length()] == ')' || s[index+word.length()] == ',' || s[index+word.length()] == '.' || s[index+word.length()] == '\'')) || 
            (index == 0 && (s[index+word.length()] == ' ' ||  s[index+word.length()] == '\"' || s[index+word.length()] == '(' || s[index+word.length()] == ')' || s[index+word.length()] == ',' || s[index+word.length()] == '.' || s[index+word.length()] == '\'')) || 
            ((s[index-1] == ' ' ||  s[index-1] == '\"' || s[index-1] == '(' || s[index-1] == ')' || s[index-1] == ',' || s[index-1] == '.' || s[index-1] == '\'') && index+word.length() == s.length())){
            count += 1;
        }
        index = s.find(word, index+1);
    }
    cout << count;

    return 0;
}