//
1)
//
#include <iostream>
using namespace std;
int main()
{
    double a,b;
    double c;
    cin >> a >> b;
    c=b/100;
    for (int i = 0; i<5; i++){
        a*=(1+c);
    }
    cout <<a;
}

//
2)
//
#include <iostream>
using namespace std;
int main()
{
    double a,b,d;
    double c;
    cin >> a >> b;
    c=b/100;
    d=a*c;
    for(int i = 0; i<5 ; i++){
        a+=d;
    }
    cout <<a;
}
