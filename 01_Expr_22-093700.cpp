#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double xe;
    double ye;
    double re;
    double rp;
    double xm;
    double ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    double ratio = (re-rp)/(sqrt(pow((xm-xe), 2) + pow((ym-ye), 2)));
    double xp = ((xm-xe)*ratio)+xe;
    double yp = ((ym-ye)*ratio)+ye;
    cout << round(xp) << " " << round(yp);
    return 0;
}