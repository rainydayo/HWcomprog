#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int H(int n) { 
    if(n == 0) return 0;
    if(n > 0) return 2*H(n-1) + 1;
    return 0;
}

int C(int n) {
    if(n == 0) return 1;
    if(n > 0){
        int x=0;
        for(int k=0; k<n; k++){
            x += (C(k))*(C(n-k-1));
        }
        return x;
    }
    return 0;
}
int M(int n);
int F(int n) {
    if(n == 0) return 1;
    if(n > 0) return n-(M(F(n-1)));
    return 0;
}

int M(int n) {
    if(n == 0) return 0;
    if(n > 0) return n-(F(M(n-1)));
    return 0;
}

int main() {
 map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
 string fn;
 int p;
 while (cin >> fn >> p) {
 if (func.find(fn) != func.end())
 cout << fn << '(' << p << ") = " << func[fn](p) << endl;
 }
 return 0;
}
