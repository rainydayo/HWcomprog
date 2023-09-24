#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
double avg(vector<int> dt){
    double a = 0.0;
    for(int i=0; i<dt.size(); i++){
        a += dt[i];
    } a/=dt.size();
    return round(a*100.0)/100.0;
}
int main() {
    int n, num, count1 = 0, count2 = 0, count3 = 0, count4 = -1;
    string order;
    cin >> n;
    vector<int> que = {};
    vector<int> t = {};
    vector<int> dt = {};
    for(int i=0; i<n; i++){
        cin >> order;
        if(order == "next"){
            cout << ">> call " << que[count1] << endl;
            count1++;
            count4++;
            continue;
        } else if(order == "avg_qtime"){
            cout << ">> avg_qtime " << avg(dt) << endl;
            continue;
        }
        cin >> num;
        if(order == "reset"){
            que.push_back(num);
        } else if(order == "new"){
            t.push_back(num);
            if(count3 == 0){
                cout << ">> ticket " << que[0] << endl; count3 = 1;
            } else {
                que.push_back(que[que.size()-1]+1);
                cout << ">> ticket " << que[que.size()-1] << endl;
            }
        } else if(order == "order"){
            count2 += count4;
            count4 = -1;
            cout << ">> qtime " << que[count2] << " " << num-t[count2] << endl;
            dt.push_back(num-t[count2]);
            count2++;
        }
    }
}
