#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int a, b, c;
cin >> a >> b >> c;
if (a==b || b==c || c==a) {
cout << "yes";
}
return 0;
}
