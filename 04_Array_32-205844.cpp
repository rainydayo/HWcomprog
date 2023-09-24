#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int burden(int liftstart, int liftend, int mestart, int meend){
    int a = 0;
    if(mestart > meend){
        if(liftstart >= mestart){
            if(liftend <= meend){
                a = 0;
            } else {
            a = abs(meend - liftend);}
        } else {
            a = abs(liftend-mestart) + abs(meend - mestart);
        }
    } else if(mestart < meend){
        if(liftstart <= mestart){
            if(liftend >= meend){
                a = 0;
            } else{
            a = abs(meend - liftend);}
        } else {
            a = abs(liftend-mestart) + abs(meend - mestart);
        }
    } else {
        a = 0;
    }
    return a;
}
int main() {
    int n, xx;
    cin >> n;
    int lift[n] = {};
    int start[n] = {};
    int end[n] = {};
    for (int i=0; i<3*n; ++i) {
        int m;
        cin >> m;
        if(i%3 == 0){
            lift[i/3] = m;
        } else if(i%3 == 1){
            start[(i-1)/3] = m;
        } else {
            end[(i-2)/3] = m;
        }
    }
    int temp;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n-i-1; j++){
            if(lift[j] > lift[j+1]){
                temp = lift[j];
                lift[j] = lift[j+1];
                lift[j+1] = temp;
                temp = start[j];
                start[j] = start[j+1];
                start[j+1] = temp;
                temp = end[j];
                end[j] = end[j+1];
                end[j+1] = temp;
            }
        }
    }
    cin >> xx;
    int one[xx] = {};
    int two[xx] = {};
    for(int i = 0; i < xx*2; i++){
        int yy;
        cin >> yy;
        if(i%2 == 0){
            one[i/2] = yy; 

        } else{
            two[(i-1)/2] = yy;
        }
    }
    for(int i = 0; i < xx; i++){
        int a = 9999*9999;
        int b;
        for(int j=n-1; j>=0; j--){
            if(burden(start[j], end[j], one[i], two[i]) <= a){
                a = burden(start[j], end[j], one[i], two[i]);
                b = lift[j];
            }
        }
        cout << ">> " << b << endl;
    }
}