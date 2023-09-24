#include <iostream>
#include <string>
using namespace std;
void reverse(int arr[], int pos) {
    int left = 0;
    int right = pos;    
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
void print(int arr[], int size){
    cout << arr[0];
    for(int i = 1; i < size; i++){
        cout << " " << arr[i];
    }
    cout << endl;
}
void sort(int arr[], int size){
    int temp;
    for(int i = 0; i < size ; i++){
        for(int j = 0; j < size-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n, k = 0;
    cin >> n;
    int arr[n] = {};
    int fin[n] = {};
    for (int i=0; i<n; ++i) {
        int m;
        cin >> m;
        arr[i] = m;
        fin[i] = m;
    }
    sort(fin, n);
    for (int i = n-1; i>=0; i--){
        while(fin[i] != arr[i]){
            print(arr, n);
            if (arr[0] == fin[i]){
                reverse(arr, i);
            } else {
                for(int j = 0; j < n; j++){
                    if (arr[j] == fin[i]){
                        k = j;
                        break;
                    }
                }
                reverse(arr, k);
            }
        }
    }
    print(arr, n);
}