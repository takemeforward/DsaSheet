// unordered_set<type> varname;
// this data structure is used to remove or find duplicate from an array of number, string, or characters
// it does the work in O(1) time complexity
#include <bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[], int n){
	unordered_set<int> s;

	for(int i = 0; i<n; i++){
		s.insert(arr[i]);
	}
	int i = 0;
	for(auto it = s.begin(); it!=s.end(); i++, it++){
		arr[i] = *it;
	}
	return s.size();
}
void printArr(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << endl;
	}
}
int main(){
	int arr[] = {1,1,2,2,4,6,7,5,6,10};

	int n = removeDuplicate(arr,10);
	printArr(arr,n);
	return 0;
}