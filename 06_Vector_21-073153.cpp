#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
string sortString(string str1, string str2) {
    int n = str1.length();
    for (int i = 0; i < n - 1; ++i) {
        if(str1[i] > str2[i]){
            return str1;
        } else if(str2[i] > str1[i]){
            return str2;
        }
    }
    return 0;
}
void insort(vector<string> & v, string e) {
 auto itr = v.begin();
 for(auto end=v.end(); itr != end; ++itr) {
 if (sortString(*itr, e) == *itr) break;
 }
 v.insert(itr, e);
}
string luen(string code){
    char temp = code[0];
    string creed;
    creed = code.substr(1);
    creed += string(1, temp);
    return creed;
}
int main() {
    vector<string> temp = {};
    string code;
    cin >> code;
    code += "$";
    for(int i = 0; i < code.length(); i++){
        insort(temp, code);
        code = luen(code);
    }
    for(int e = 0; e < code.length(); e++){
        cout << temp[e][code.length()-1];
    }
    return 0;
}