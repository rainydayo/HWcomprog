#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;
void sort(vector<string> &tag, vector<double> &receive){
    for(int i=0; i<tag.size(); i++){
        for(int j=0; j<tag.size(); j++){
            if(receive[j] < receive[j+1]){
                swap(tag[j], tag[j+1]);
                swap(receive[j], receive[j+1]);
            }
        }
    }
}
int main() {
    vector<string> tag = {};
    vector<double> price = {};
    vector<double> receive = {};
    string name, want, temp = "";
    double cost; int index = 0;
    while(cin >> name){
        if(name == "END"){break;}
        cin >> cost;
        tag.push_back(name);
        price.push_back(cost);
        receive.push_back(0);
    }
    cin.ignore();
    getline(cin, want);
    for(int i=0; i < want.length(); i++){
        if(want[i] == ' '){
            for(int j=0; j<tag.size(); j++){
                if(temp == tag[j]){
                    receive[j] += price[j];
                }
            }
            temp = "";
        } else { temp += string(1,want[i]);}
    }
    for(int j=0; j<tag.size(); j++){
                if(temp == tag[j]){
                    receive[j] += price[j];
                }
            }
    sort(tag, receive);
    if(receive[0] == 0.0){
        cout << "No Sales";
    } else {
    for(int i=0; i<3; i++){
        cout << tag[i] << " " << receive[i] << endl;
    }}
}
