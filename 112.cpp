#include <iostream>
using namespace std;
int main(){
	int SIZE;
	cin>>SIZE;
	for(int i=0; i<SIZE; i++) {
  		for(int j=0; j<SIZE; j++){
    		if (i==j || i+j==SIZE-1){
       			cout << '0';
       		}
    		else{
       			cout << '1';
       		}}
  		cout << endl;
}
}
