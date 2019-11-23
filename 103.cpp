#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1, a2, a3;
	for(int i = 100; i <= 999; i++){
		a1 = i / 100;
		a2 = i % 100/10;
		a3 = i % 10;
		if(pow(a1, 3)+pow(a2, 3)+pow(a3, 3)==i){
			cout<<i<<" ";
		}
	}
}
