#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
string reverse(string num){
    string a = "";
    for(int i = num.length()-1; i >= 0; i--){
        a += string(1,num[i]);
    }
    return a;
}
int main(){
    string a, temp, ans;
    cin >> temp;
    int val = 0;
    while(cin >> a){
        if(a == "END"){
        break;}
        string modtemp = "";
        string moda = "";
        string ans = "";
        if(a.length() > temp.length()){
            for(int i = 0; i<a.length()-temp.length(); i++){
            modtemp += "0";
            }
            modtemp += temp;
            moda = a;
        } else if(a.length() < temp.length()){
            for(int i = 0; i<temp.length()-a.length(); i++){
            moda += "0";
            }
            moda += a;
            modtemp = temp;
        } else {
        modtemp = temp;
        moda = a;}
        for(int i=moda.length()-1; i>=0; i--){
            val = (val + (moda[i]-'0') + (modtemp[i]-'0'));
            ans += to_string(val%10);
            val/=10;
        }
        if(val > 0){
        ans += to_string(val);
        val = 0;}
        temp = reverse(ans);
    }
    for(char e : temp){
    cout << e;}
}
