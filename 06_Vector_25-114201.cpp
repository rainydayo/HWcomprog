#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <set>
using namespace std;
string upgrade(string grade){
    string res = grade;
    string arr1[8] = {"F", "D", "D+", "C", "C+", "B", "B+", "A"};
    for(int i=0; i<7; i++){
        if(arr1[i] == grade){
            res = arr1[i+1];
        }
    }
    return res;
}
int main() {
    string g, num;
    vector<string> student = {};
    vector<string> grade = {};
    while(cin >> num){
        if(num == "q"){break;}
        cin >> g;
        student.push_back(num);
        grade.push_back(g);
    }
    while(cin >> num){
        for(int i=0; i<student.size(); i++){
            if(num == student[i]){
                grade[i] = upgrade(grade[i]);
            }
        }
    }
    for(int i=0; i<student.size(); i++){
        cout << student[i] << " " << grade[i] << endl;
    }
}
