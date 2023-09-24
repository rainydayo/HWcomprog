#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool bingo(bool marked[5][5]){
    bool bing = false,setbing;
    for(int i=0; i<5;i++){
        setbing = true;
        for(int j=0; j<5;j++){
            if(marked[i][j] != true){
                setbing = false;
                break;
            }
        }
        if(setbing == true){
            bing = true; break;
        }
    } setbing = true;
    for(int i=0; i<5;i++){
        setbing = true;
        for(int j=0; j<5;j++){
            if(marked[j][i] != true){
                setbing = false;
                break;
            }
        }
        if(setbing == true){
            bing = true; break;
        }
    }
    if(marked[0][0] && marked[1][1] && marked[3][3] && marked[4][4]){bing = true;}
    if(marked[4][0] && marked[3][1] && marked[1][3] && marked[0][4]){bing = true;}
    return bing;
}
int main() {
    vector<string> num = {};
    string arr[5][5] = {};
    bool marked[5][5] = {{false,false,false,false,false},{false,false,false,false,false},{false,false,true,false,false},{false,false,false,false,false},{false,false,false,false,false}};
    string aa, bingnum;
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> aa;
            if(i == 0){continue;}
            if(j == 0){
                arr[i-1][j] = "B"+aa;
            } else if(j==1){
                arr[i-1][j] = "I" + aa;
            } else if(j==2){
                arr[i-1][j] = "N" + aa;
            } else if(j==3){
                arr[i-1][j] = "G" + aa;
            } else if(j == 4){
                arr[i-1][j] = "O" + aa;
            }
        }
    }
    while(getline(cin, bingnum)){
        string temp = "";
        bingnum += " ";
    for(int k=0; k < bingnum.length();k++){
        if(bingnum[k] != ' '){
            temp += string(1, bingnum[k]);
        } else {
        num.push_back(temp);
        temp = "";
        }
        }
    }
    for(int k = 0; k < num.size(); k++){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(arr[i][j] == num[k]){marked[i][j] = true;}
        }
    }
    if(bingo(marked)){{cout << k << endl; break;}}
    }
    bool setbing;
    for(int i=0; i<5;i++){
        setbing = true;
        for(int j=0; j<5;j++){
            if(marked[i][j] != true){
                setbing = false;
                break;
            }
        }
        if(setbing){
            for (int j = 0; j < 5; j++) {
                if(arr[i][j] != "N*"){
                cout << arr[i][j];
                if (j < 4) {
                    cout << ", ";
                }}
            }
            cout << endl;
        }
    }
    for(int i=0; i<5;i++){
        setbing = true;
        for(int j=0; j<5;j++){
            if(marked[j][i] != true){
                setbing = false;
                break;
            }
        }
        if(setbing){
            for (int j = 0; j < 5; j++) {
                if(arr[j][i] != "N*"){
                cout << arr[j][i];
                if (j < 4) {
                    cout << ", ";
                }}
            }
            cout << endl;
        }
    }
    if(marked[0][0] && marked[1][1] && marked[3][3] && marked[4][4]){cout << arr[0][0] << ", " << arr[1][1] << ", " << arr[3][3] << ", " << arr[4][4] << endl;}
    if(marked[4][0] && marked[3][1] && marked[1][3] && marked[0][4]){cout << arr[4][0] << ", " << arr[3][1] << ", " << arr[1][3] << ", " << arr[0][4] << endl;}
    
}