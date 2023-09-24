#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <cmath>
using namespace std;
void insort(vector<vector<double>> & v, vector<double> e) {
    auto itr = v.begin();
    for(auto end=v.end(); itr != end; ++itr) {
    if ((*itr)[3] >= e[3]) break;
    }
    v.insert(itr, e);
}
int main() {
    vector<vector<double>> all;
    vector<double> temp = {1, 1, 1, 1};
    double x, y;
    int count;
    cin >> count;
    for(int i=0; i < count; i++){
        cin >> x >> y;
        temp[0] = i+1;
        temp[1] = x;
        temp[2] = y;
        temp[3] = hypot(x,y);
        insort(all, temp);
    }
    cout << "#" << all[2][0] << ": (" << all[2][1] << ", " << all[2][2] << ")";
    return 0;
}