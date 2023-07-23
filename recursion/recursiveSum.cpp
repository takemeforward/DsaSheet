#include <iostream>
using namespace std;
int sum(int A[], int n){
	if(n==1){
		return A[0];
	}else{
		return sum(A, n-1) + A[n-1];
	}
}
int main(){
	int n = 6;
	int A[] = {1,2,3,4,5};

	cout << "sum = " << sum(A, n);
	return 0;
}