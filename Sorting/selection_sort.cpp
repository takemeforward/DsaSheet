#include "online_judge.h"

void selection_sort(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		int min = i;
		for(int j = i; j<n; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}
void printArray(int arr[], int n){
	for(int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main(){
	inputOutput();
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	selection_sort(arr, n);

	printArray(arr,n);
	return 0;
}