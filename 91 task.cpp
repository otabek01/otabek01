#include <iostream>
#include <cmath>
using namespace std;
int main() {
float sum=0;
float 	n=2,k=3;
float q;
int j=0;
for (int i=2;i<=9 ;i++ )
    {
		n=n+j;
		k=k+j;
        sum += (n/k);
        j++;
    }
  cout<<sum;
  return 0;
}

