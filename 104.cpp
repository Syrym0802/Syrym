#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1, a2, a3, a4, a=0;
	for(int i = 1000; i < 10000; i++){
		a1 = i / 1000;
		a2 = i % 1000 / 100;
		a3 = i % 100 / 10;
		a4 = i % 10;
		if(i>600*(a1+a2+a3+a4)){
			a++;
		}
	}
	cout<<a;
}
