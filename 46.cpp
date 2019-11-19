#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a, b, c;
cin >> a >> b >> c;
if (a%5==0 && b%5==0 && c%5==0) {
cout << a + b + c;
}
else {
cout << "error";
}
return 0;
}

