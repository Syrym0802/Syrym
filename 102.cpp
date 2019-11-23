#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1, a2, a3, a4, a5;
	for(int i = 1000; i < 10000; i++){
		a1 = i / 1000;
		a2 = i % 1000 / 100;
		a3 = i % 100 / 10;
		a4 = i % 10;
		if(a1 == 3 || a2 == 3 || a3 == 3 || a4 == 3){
			cout<<i<<" ";
		}
	}
}
