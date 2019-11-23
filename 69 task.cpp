#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a) {
    double p=a+b+c;
    double s = sqrt( p * (p - a) * (p - b) * (p - c));
        cout << s;
    }
    else {
        cout << "Not exist";
    }
    return 0;
}
