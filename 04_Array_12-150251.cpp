#include <iostream>
#include <string>
using namespace std;
int main() {
    string nick[] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};
    string name[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    int N;
    cin >> N;
    for (int i=0; i<N; ++i) {
        int a = -1;
        int b = -1;
        string m;
        cin >> m;
        for(int j = 0; j < 10; j++){
            if (m == name[j]){
                a = j;
                cout << nick[j] << endl;
            }
        }
        for(int j = 0; j < 10; j++){
            if (m == nick[j]){
                b = j;
                cout << name[j] << endl;
            }
        }
        if ( a == -1 && b == -1){
            cout << "Not found" << endl;
        }
    }
}