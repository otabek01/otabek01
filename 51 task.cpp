#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int m, h;
    cout << "Hours" << endl;
    cin >>h;
    cout << "Minutes" << endl;
    cin >>m;
    double x,y,z,l;
    y=h*30;
    if (y>=180) {
            l=360-y;
            x=m*6;
            x=x-1;
            cout <<x<< endl;
    }
    else
        x=m*6;
        z=x-y;
        cout <<z<< endl;
        return 0;
}
