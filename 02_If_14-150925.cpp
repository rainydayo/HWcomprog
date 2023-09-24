#include <cmath>
#include <iostream>
using namespace std;
int main() {
    string ida, idb, coma, comb, cal1a, cal1b, cal2a, cal2b;
    double gpaxa, gpaxb;
    cin >> ida >> gpaxa >> coma >> cal1a >> cal2a;
    cin >> idb >> gpaxb >> comb >> cal1b >> cal2b;
    if (coma == "A" && comb == "A"){
        if (cal1a <= "C" & cal2a <= "C"){
            if (cal1b <= "C" && cal2b <= "C"){
                if (gpaxa == gpaxb){
                    if (cal1a == cal1b){
                        if (cal2a == cal2b){
                            cout << "Both";
                        } else if (cal2a > cal2b){
                            cout << idb;
                        } else if (cal2a < cal2b){
                            cout << ida;
                        }
                    } else if (cal1a > cal1b){
                        cout << idb;
                    } else if (cal1a < cal1b){
                        cout << ida;
                    }
                } else if (gpaxa < gpaxb){
                    cout << idb;
                } else if (gpaxa > gpaxb){
                    cout << ida;
                }
            } else{
                cout << ida;
            }
        } else if (cal1b <= "C" && cal2b <= "C"){
            cout << idb;
        } else{
            cout << "None";
        }
    } else if (coma != "A" && comb == "A"){
        if (cal1b <= "C" && cal2b <= "C"){
            cout << idb;
        } else{
            cout << "None";
        }
    } else if (coma == "A" && comb != "A"){
        if (cal1a <= "C" && cal2a <= "C"){
            cout << ida;
        } else{
            cout << "None";
        }
    } else{
        cout << "None";
    }
}   