#include <iostream>
#include <cmath>
using namespace std;
int main() {
long sum=0;
int 	n=3,k=5,j=0;
    for (int i=0;i<=37 ;i++ )
    {
		n=n+j;
		k=k+j;
        sum += cos(n/k);
        j=j+2;
    }
  cout<<sum;
  return 0;
}

