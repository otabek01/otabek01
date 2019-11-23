#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a,b,c,x1,x2;
    cout << "Write a: ";
    cin >> a;
    cout << "Write b: ";
    cin >> b;
    cout << "Write c: ";
    cin >> c;
    if (((b*b)-(4*a*c)) >=0) {
        x1 = ((0-b) + sqrt((b*b)-(4*a*c))) / (2*a);
        cout <<"First x is: " << x1 << endl;
        x2 = ((0-b) - sqrt((b*b)-(4*a*c))) / (2*a);
        cout <<"Second x is: " << x2 << endl;
    }
    else {
        cout << "Discriminant is less than 0, poetomu idi na hui" << endl;
    }
    return 0;
}