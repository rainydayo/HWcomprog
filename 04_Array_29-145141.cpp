#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int testrange(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    int range = 0;
    if((min(x4, x2)-max(x3, x1)) > 0 && (min(y2, y4)-max(y1, y3)) > 0){
        range = (min(x4, x2)-max(x3, x1)) * (min(y2, y4)-max(y1, y3));
    }
    return range;
}
int findj(int n, int i){
    int x = 0;
    for(int a = 0; a < n; a++){
        for(int b = a+1; b < n; b++){
            if(x == i){
                return a;
            }
            x++;
        }
    }
    return -1;
}

int findk(int n, int i){
    int x = 0;
    for(int a = 0; a < n; a++){
        for(int b = a+1; b < n; b++){
            if(x == i){
                return b;
            }
            x++;
        }
    }
    return -1;
}


int main() {
    int n, x1, y1, x2, y2, maxcept = 0;
    cin >> n;
    int arr[n][5] = {};
    vector<int> intercept = {};
    for(int i =0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        arr[i][0] = i;
        arr[i][1] = x1;
        arr[i][2] = y1;
        arr[i][3] = x2;
        arr[i][4] = y2;
    }
    for(int i =0; i < n; i++){
        for(int j = i+1; j < n; j++){
            intercept.push_back(testrange(arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[j][1], arr[j][2], arr[j][3], arr[j][4]));
            if(testrange(arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[j][1], arr[j][2], arr[j][3], arr[j][4]) > maxcept){
                maxcept = testrange(arr[i][1], arr[i][2], arr[i][3], arr[i][4], arr[j][1], arr[j][2], arr[j][3], arr[j][4]);
            }
        }
    }
    if(maxcept == 0){
        cout << "No overlaps";
    } else {
    cout << "Max overlapping area = " << maxcept << endl;
    for(int i = 0;i < intercept.size(); i++){
        if(intercept[i] == maxcept){
            cout << "rectangles " << arr[findj(n, i)][0] << " and " << arr[findk(n, i)][0] << endl;
        }
    }}
}