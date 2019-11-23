#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1, a2, a3, a4, a5;
	for(int i = 10000; i <= 99999; i++){
		a1 = i / 10000;
		a2 = i % 10000 / 1000;
		a3 = i % 1000 / 100;
		a4 = i % 100 / 10; 
		a5 = i % 10;
		if (a3%2==1 && (a1+a2+a3+a4+a5)%4==0){
			cout<<i<<" ";
		}
	}
}
