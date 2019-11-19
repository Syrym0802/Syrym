#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a, b, c;
cin >> a >> b >> c;
if (a+b>c) {
cout << a << b;
}
else if (b+c>a) {
cout << b<< c;
}
else {
cout << c<<a;
}
return 0;
}

