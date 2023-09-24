#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
void insort(vector<vector<int>> & v, vector<int> e) {
    auto itr = v.begin();
    for(auto end=v.end(); itr != end; ++itr) {
    if (*itr >= e) break;
    }
    v.insert(itr, e);
}

int main() {
    vector<int> all;
    vector<vector<int>> hehe;
    vector<int> chuakraw = {99999, 99999, 99999, 0};
    int num, temp = -99999999, anothertemp = 0;
    while(cin >> num){
        all.push_back(num);
    }
    for(int i = 0; i< all.size(); i++){
        if(all[i] != temp){
            if(i > 0 && i < all.size()-1){
                chuakraw[2] = i;
                chuakraw[3] = chuakraw[2]-chuakraw[1];
                if(chuakraw[3] > anothertemp){
            anothertemp = chuakraw[3];
        }
                hehe.push_back(chuakraw);
                chuakraw[0] = all[i];
                chuakraw[1] = i;
            } else if(i == 0){
                chuakraw[0] = all[i];
                chuakraw[1] = 0;
            } else if (i == all.size()-1){
                chuakraw[2] = i;
                chuakraw[3] = chuakraw[2]-chuakraw[1];
                if(chuakraw[3] > anothertemp){
            anothertemp = chuakraw[3];
        }
                hehe.push_back(chuakraw);
                chuakraw[0] = all[i];
                chuakraw[1] = i;
                chuakraw[2] = i+1;
                chuakraw[3] = 1;
                if(chuakraw[3] > anothertemp){
            anothertemp = chuakraw[3];
        }
                hehe.push_back(chuakraw);
            }
        }else{
            if(i == all.size()-1){
                chuakraw[2] = all.size();
                chuakraw[3] = chuakraw[2]-chuakraw[1];
                hehe.push_back(chuakraw);
            }
        }
        temp = all[i];
    }
    vector<vector<int>> last;
    for(auto e : hehe){
        if(e[3] == anothertemp){
            insort(last,e);
        }
    }
    for(auto k : last){
        cout << k[0] << " --> " << "x[ " << k[1] << " : " << k[2] << " ]" << endl;
    }
    return 0;
}