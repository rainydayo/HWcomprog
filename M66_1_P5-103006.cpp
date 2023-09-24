#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, a,b, count = 0, maxcount = 0;
    cin >> n;
    int arr[n][2] = {};
    for(int i=0; i<n; i++){
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }
    for(int i=1; i <= 1440; i++){
        count = 0;
        for(int j =0; j < n; j++){
                if(arr[j][0] <= i && arr[j][1] > i){
                    count++;
                }
        }
        if(count > maxcount){
            maxcount = count;
        }
    }
    cout << maxcount;
}