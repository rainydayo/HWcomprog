#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string kum, front, end;
    int a = 999, b = 0, c = 0, d = 0;
    char arr[5] = {'a','e','i','o','u'};
    getline(cin, kum);
    for(int i=0; i < kum.length(); i++){
        if(a == 999){
        for(int j=0; j < 5; j++){
            if(kum[i] == arr[j]){
                a = i;
            }
        }}
        if(kum[i] == ' '){
            b = i;
            break;
        }
    }
    front = kum.substr(a,(b-a));
    for(int i = kum.length()-1; i >= 0; i--){
        if(kum[i] == ' '){
            d = i;
            for(int k = i; k < kum.length(); k++){
                for(int j =0; j < 5; j++){
                    if(kum[k] == arr[j]){
                        c = k;
                    }
                }
                if(c != 0){
                    break;
                }
            }
            break;
        }
    }
    end = kum.substr(c);
    cout << kum.substr(0,a) << end << kum.substr(b,(c-b)) << front;
}