#include <iostream>
using namespace std;
void gentleMan1(int);
void gentleMan2(int);
void gentleMan1(int val){
	if(val<=0){
		return;
	}
	cout << "You go first" << endl;
	gentleMan2(val);
}

void gentleMan2(int val){
	cout << "No you go first" << endl;
	gentleMan1(val-1);
}
int main(){
	int n = 10;

	gentleMan1(n);
	return 0;
}