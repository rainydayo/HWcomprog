#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

void hehe(vector<vector<double>> &banchee, vector<string> &arr){
    vector<double> temp;
    string anothertemp;
    for (int i = 0; i < banchee.size() - 1; ++i) {
        for(int j = 0; j < banchee.size() - i - 1; ++j){
            if(banchee[j][2] < banchee[j+1][2]){
                temp = banchee[j];
                banchee[j] = banchee[j+1];
                banchee[j+1] = temp;
                anothertemp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = anothertemp;
            } else if(banchee[j][2] == banchee[j+1][2] && banchee[j][0] < banchee[j+1][0]){
                temp = banchee[j];
                banchee[j] = banchee[j+1];
                banchee[j+1] = temp;
                anothertemp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = anothertemp;
            }
        }
    }
}

void sort(double v[], int size){
    double temp;
    for (int i=0; i < size; i++) {
        for(int j=0; j < size; j++){
            if(v[j] < v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
    }}
}
int main() {
    vector<vector<double>> banchee = {};
    vector<string> arr = {};
    string chuuphak;
    double prachachon = 0.0, kananphak, siang = 0.0;
    while(cin >> chuuphak){
        if(chuuphak == "END"){break;}
        vector<double> phak = {};
        arr.push_back(chuuphak);
        cin >> kananphak;
        prachachon += kananphak;
        phak.push_back(kananphak);
        banchee.push_back(phak);
    }
    prachachon/=100.0;
    double sorted[banchee.size()] = {};
    for(int i=0; i < banchee.size(); i++){
        banchee[i].push_back(banchee[i][0]/prachachon);
        banchee[i].push_back(floor(banchee[i][1]));
        banchee[i].push_back(banchee[i][1] - banchee[i][2]);
        sorted[i] = banchee[i][1] - banchee[i][2];
        siang += banchee[i][2];
    }
    sort(sorted, banchee.size());
    if(siang < 100){
        for(int i=0; i < 100-siang; i++){
            for(int j=0; j < banchee.size(); j++){
                if(banchee[j][3] == sorted[i]){
                    banchee[j][2] += 1;
                }
            }
        }
    }
    hehe(banchee, arr);
    for(int i = 0; i < banchee.size(); i++){
        if(banchee[i][2] > 0){
        cout << arr[i] << " " << banchee[i][2] << " " << banchee[i][0] << endl;}
    }
    return 0;
}
