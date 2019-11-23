#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0, b = 1;
	for(int i = 1; i <= 10; i++){
		b = i*i;
		a+=b;
		b=1;
	}cout<<a;
}
