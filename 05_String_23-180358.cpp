#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string code, alpha;
    int num, head, foot, k;
    cin >> code >> num;
    head = stoi(code.substr(0,1));
    alpha = code.substr(1,2);
    foot = stoi(code.substr(4,3));
    foot += num;
    num=foot/1000;
    foot%=1000;
    if(foot >= 100){
        k = 3;
    } else if(foot >= 10){
        k = 2;
    } else {
        k = 1;
    }
    while(num > 0){
            if(alpha[1] == 90 && alpha[0] == 90){
                alpha[0] = 65;
                alpha[1] = 65;
                head += 1;
            } else if(alpha[1] < 90){
                alpha[1] += 1;
            } else if(alpha[0] < 90 && alpha[1] == 90){
                alpha[0] += 1;
                alpha[1] = 65;
            }
        num--;
    }
    if(head == 0){
        cout << 0;
    } else {
        cout << head;
    }
    cout << alpha << "-";
    for(int i = 0; i < 3-k; i++){
        cout << 0;
    }
    cout << foot;
}