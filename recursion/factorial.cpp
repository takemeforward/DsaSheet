#include <iostream>
using namespace std;
int factorial(int n){
	if(n<=1){
		return n;
	}else{
		return factorial(n-1) * n;
		
	}

}
int main(){
	int n = 5;

	int fact = factorial(n);

	cout << "Factorial of " << n << " is " << fact << endl;
	return 0;
}