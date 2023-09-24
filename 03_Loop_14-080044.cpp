#include <iostream>
#include <string>
using namespace std;

int main() {
    string ans, kid;
    getline(cin, ans);
    getline(cin, kid);
    int count = 0;
    if (ans.length() != kid.length()){
        cout << "Incomplete answer";
    } else{
        for (int i = 0; i < ans.length(); i++){
            if (ans[i] == kid[i]){
                count += 1;
        }
    } cout << count;
    }
}