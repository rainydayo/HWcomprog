#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string checkalpha(string a){
    string x[12] = {"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
    string y[12] = {"0","1","2","3","4","5","6","7","8","9","-",","};
    string decode = "", result = "";
    for(int i =0; i < a.length(); i++){
        if(a[i] >= 65 && a[i] <= 90){
            decode += "U";
        } else if(a[i] >= 97 && a[i] <= 122){
            decode += "L";
        }
    }
    for(int i=0; i<decode.length(); i+=4){
        for(int j=0; j<12;j++){
            if(decode.substr(i,4) == x[j]){
                result += y[j];
            }
        }
    }
    return result;
}
string encode(string code){
    string halfcode = "";
    string x[12] = {"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
    char y[12] = {'0','1','2','3','4','5','6','7','8','9','-',','};
    for(int i=0;i<code.length();i++){
        for(int j=0;j<12;j++){
            if(code[i] == y[j]){
                halfcode += x[j];
            }
        }
    }
    return halfcode;
}
char swapU(char a){
    if(a >= 97 && a <= 122){
        return a - 32;
    } else{
        return a;
    }
}
char swapL(char a){
    if(a >= 65 && a <= 90){
        return a + 32;
    } else {
        return a;}
}
int main() {
    string code, order;
    getline(cin, code);
    while(getline(cin, order)){
        if(order[0] == 'E'){
            string taobin = encode(order.substr(2));
            int k = 0, cocoyuzu = taobin.length();
            while(cocoyuzu != 0){
                for(int i=0;i<code.length();i++){
                    if((code[i]>=65&&code[i]<=90)||(code[i]>=97&&code[i]<=122)){
                        if(taobin[k] == 'U'){
                            code[i] = swapU(code[i]);
                        } else if(taobin[k] == 'L'){
                            code[i] = swapL(code[i]);
                        }
                        k++;
                        cocoyuzu--;
                    }
                    cout << code[i];
                    if(cocoyuzu == 0){
                        break;
                    }
                }
            }
            cout << endl;
        } else {
            cout << checkalpha(order.substr(2)) << endl;
        }
    }
}