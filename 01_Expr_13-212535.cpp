#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double aa;
    double bb;
    double cc;
    cin >> aa;
    cin >> bb;
    cin >> cc;
    double result = (-bb - (sqrt(pow(bb, 2) - 4*aa*cc))) / (2*aa);
    double ndresult = (-bb + (sqrt(pow(bb, 2) - 4*aa*cc))) / (2*aa);
    cout << round(result*1e3)/1e3 << " " ;
    cout << round(ndresult*1e3)/1e3 << endl;
    return 0;
}