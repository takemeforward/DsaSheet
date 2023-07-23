#include <iostream>
using namespace std;
void reverse(int A[], int s, int e){
	if(s<e){
		int temp = A[s];
		A[s] = A[e];
		A[e] = temp;

		reverse(A,s+1, e-1);
	}
}
int main(){
	int n = 5;
	int A[] = {1,2,3,4,5};

	reverse(A,0,4);

	for(int i = 0; i<n; i++){
		cout << A[i] << endl;
	}
	return 0;
}