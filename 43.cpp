#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
double a;
cin >> a;
if (a >=1 && a <= 2) {
cout << "wintery";
}
else if (a >= 3 && a <= 5) {
cout << "spring";
}
else if (a >= 6 && a <= 8) {
cout << "summary";
}
else if (a >=9 && a <=11){
cout << "autumn";
}
else {
cout << "winter";
}
return 0;
}

