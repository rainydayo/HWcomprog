#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
void sort(vector<int> & arr){
    int temp;
    for(int i = 0; i < arr.size() ; i++){
        for(int j = 0; j < arr.size()-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void insort(vector<int> & v, int e) {
 int mid, left = 0, right = v.size();
 while (left < right) {
 mid = (left + right - 1) / 2; // ***
 if (e < v[mid])
 right = mid;
 else if (e > v[mid])
 left = mid+1;
 else
 left = right = mid;
 }
 v.insert(v.begin()+left, e);
}
int main() {
    vector<int> temp = {};
    int line;
    while(cin >> line){
        int a = 0;
        for(int i : temp){
            if(i == line){
                a = 1;
                break;
            }
        }
        if(a == 0){
            insort(temp, line);}
    }
    cout << temp.size() << endl;
    if(temp.size() > 10){
    for(int i=0;i<10;i++){
       if(i != 9){
        cout << temp[i] << " ";
       } else {
        cout << temp[i];
       }
    }} else {
        for(int i=0;i<temp.size();i++){
        if(i != temp.size()-1){
        cout << temp[i] << " ";
       } else {
        cout << temp[i];
       }
    }
    }
    return 0;
}