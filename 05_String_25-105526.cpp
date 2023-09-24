#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string last(int a){
    string b = "";
    if(a == 0){
    b = "0";} else if(a == 1){
    b = "1";} else if(a == 2){
    b = "2486";} else if(a == 3){
    b = "3971";} else if(a == 4){
    b = "46";} else if(a == 5){
    b = "5";} else if(a == 6){
    b = "6";} else if(a == 7){
    b = "7931";} else if(a == 8){
    b = "8426";} else if(a == 9){
    b = "91";}
    return b;
}
int mod(string num, int a)
{
    int res = 0;
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + (num[i] - '0')) % a;
    if(res > 0){return res -1;} else {
    return a-1;}
}
int main(){
    string a, n;
    while(cin >> a){
        cin >> n;
        if(n.length() == 1){
        if(stoi(n) == 0){cout << ">> " << 1 << endl;continue;}}
        if(a[a.length()-1]-'0' == 0){cout << ">> "<< 0 << endl;continue;}
        string b = last(a[a.length()-1]-'0');
        int c = mod(n, b.length());
        cout << ">> " << b[c] << endl;
    }
}