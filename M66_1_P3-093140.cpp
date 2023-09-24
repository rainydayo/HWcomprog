#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
double grade(string a){
    double b;
    if(a == "A"){
        b = 4.0;
    } else if(a == "B+"){
        b = 3.5;
    } else if(a == "B"){
        b = 3.0;
    } else if(a == "C+"){
        b = 2.5;
    } else if(a == "C"){
        b = 2.0;
    } else if(a == "D+"){
        b = 1.5;
    } else if(a == "D"){
        b = 1.0;
    } else if(a == "F"){
        b = 0.0;
    }
    return b;
}
int main() {
    int n;
    double G, weigth = 0, totalweigth = 0;
    string a;
    cin >> n;
    cin.ignore();
    for(int i=0; i < n; i++){
        cin >> a >> G;
        weigth += grade(a)*G;
        totalweigth += G;
    }
    cout << round((weigth/totalweigth)*100)/100;
}