#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string a, b, savea, saveb, maxa = "", maxb = "";
    int count = 0, maxcount = 0;
    cin >> a >> b;
    for(int i = 0; i < a.length()+b.length();i++){
        count = 0;
        savea = "";
        saveb = "";
        if(i < a.length()){
            for(int j = 0; j < i; j++){
                savea += "-";
            }
            savea += a;
            for(int k =0; k<savea.length(); k++){
                    if(k == b.length()){
                    break;}
                    if(savea[k]>=65 && savea[k]<=90 && b[k]>=65 && b[k]<=90 && savea[k] == b[k]){
                        count += 1;
                    }
            }
            if(count > maxcount){
            maxcount = count;
            maxa = savea;
            maxb = b;}
        } else {
            for(int j = a.length(); j < i; j++){
                saveb += "-";
            }
            saveb += b;
            for(int k =0; k<saveb.length(); k++){
                if(k == a.length()){
                break;}
                    if(saveb[k]>=65 && saveb[k]<=90 && a[k]>=65 && a[k]<=90 && saveb[k] == a[k]){
                        count += 1;
                    }
            }
            if(count > maxcount){
            maxcount = count;
            maxa = a;
            maxb = saveb;}
        }
    }
    if(maxcount == 0){
    cout << a << endl;
    cout << b << endl;
    cout << maxcount;} else {    cout << maxa << endl;
    cout << maxb << endl;
    cout << maxcount;}
}