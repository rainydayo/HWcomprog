#include <iostream>
#include <string>
#include <vector>
using namespace std;
int sum(vector<int> v) {
    int num = 0;
    for (int e : v) {
        num += e;
    }
    return num;
}

void insort(vector<int> &v, int e) {
    auto itr = v.begin();
    for (auto end = v.end(); itr != end; ++itr) {
        if (*itr >= e) break;
    }
    v.insert(itr, e);
}

void insuud(vector<vector<int>> &fit, vector<int> hehe) {
    auto itr = fit.begin();
    for (auto end = fit.end(); itr != end; ++itr) {
        if (*itr <= hehe) break;
    }
    fit.insert(itr, hehe);
}

void sort(vector<vector<int>> &fit) {
    vector<int> temp = {};
    for (int i=0; i < fit.size(); i++) {
        for(int j=0; j < fit.size(); j++){
            if(sum(fit[j]) < sum(fit[j+1])){
                temp = fit[j];
                fit[j] = fit[j+1];
                fit[j+1] = temp;
            }
            if(sum(fit[j]) == sum(fit[j+1])){
                if(fit[j].size() > fit[j+1].size()){
                        temp = fit[j];
                        fit[j] = fit[j+1];
                        fit[j+1] = temp;
                } else if (fit[j].size() == fit[j+1].size()){
                    if(fit[j] > fit[j+1]){
                        temp = fit[j];
                        fit[j] = fit[j+1];
                        fit[j+1] = temp;
                    }
                }
                }}}  
}

void firstfit(vector<vector<int>> &fit, vector<int> &num) {
    while (!num.empty()) {
        vector<int> hehe;
        for (auto itr = num.begin(); itr != num.end();) {
            if (sum(hehe) + *itr <= 100) {
                insort(hehe, *itr);
                itr = num.erase(itr); 
            } else {
                ++itr;
            }
        }
        fit.push_back(hehe);

    }
    sort(fit);
}

void bestfit(vector<vector<int>> &fit, vector<int> &num){
    for(int item : num){
        int min_space = 101;
        int best_bin = -1;
        for(int i = 0; i < fit.size(); ++i){
            int space_left = 100 - sum(fit[i]);
            if(space_left >= item && space_left < min_space){
                min_space = space_left;
                best_bin = i;
            }
        }
        if(best_bin != -1){
            insort(fit[best_bin], item);
        } else {
            fit.push_back({item});
        }
    }
    sort(fit);
}
int main() {
    vector<int> num = {};
    vector<vector<int>> fit = {};
    string order;
    int lol;
    cin >> order;
    while (cin >> lol) {
        num.push_back(lol);
    }
    if (order == "first") {
        firstfit(fit, num);
    } else if (order == "best") {
        bestfit(fit, num);        
    }
    for (vector<int> e : fit) {
        for (int i = 0; i < e.size(); i++) {
            if (i < e.size() - 1) {
                cout << e[i] << " ";
            } else {
                cout << e[i] << endl;
            }
        }
    }
}
