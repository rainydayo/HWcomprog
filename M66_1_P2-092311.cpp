#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;
double H(double u, double t, double angle){
    double heigth;
    heigth = (t-(u*0.1*sin((M_PI*angle)/180))) * ((u*sin((M_PI*angle)/180)) + (0.5*10*(t-(3*0.1*(u*sin((M_PI*angle)/180))))));
    return heigth;
}
double R(double u, double t, double angle){
    double radius;
    radius = u*t*(cos((M_PI*angle)/180));
    return radius;
}
int main() {
    double u, t, angle;
    cin >> u >> angle >> t;
    cout << round(H(u, t, angle) * 10)/10 << " " << round(R(u, t, angle) * 10)/10;
}