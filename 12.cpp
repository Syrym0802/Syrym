#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
double x,y,e=2.7;
cin >> x;
y = pow(e,x-2)+abs(sin(x))-pow(x,4)*cos(1/x);
cout << y;
return 0;
}
