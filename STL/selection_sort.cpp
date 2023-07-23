#include "online_judge.h"
#include <bits/stdc++.h>

void selection_sort(int arr[], int n){
	for(int i = 0; i<n-1; i++){
		int min = i;
		for(int j = i+1; j<n; j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

void bubble_sort(int arr[], int n){
	for(int i = n-1; i>=0; i--){
		bool didSwap = false;
		for(int j = 0; j<=i-1; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				didSwap = true;
			}
		}
		if(!didSwap){
			break;
		}
	}
}
void insertion_sort(int arr[], int n){
	for(int i = 0; i<n; i++){
		int j = i;
		while(j>0&& arr[j-1]>arr[j]){
			int temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}

	}
}
void merge(int arr[], int l, int m, int h){
	int left = l;
	int right = m+1;
	vector<int> temp;
	while(left<=m&&right<=h){
		if(arr[left]<arr[right]){
			temp.push_back(arr[left]);
			left++; 
		}else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=m){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=h){
		temp.push_back(arr[right]);
		right++;
	}

	for(int i = l; i<=h; i++){
		arr[i] = temp[i-l];
	}
}
void merge_sort(int arr[], int l, int h){
	if(l>=h){
		return;
	}
	int m = (l+h)/2;

	merge_sort(arr, l, m);
	merge_sort(arr, m+1, h);
	merge(arr,l,m,h);
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
	// selection_sort(arr, n);
	// bubble_sort(arr,n);
	// insertion_sort(arr, n);
	merge_sort(arr, 0, n-1);

	printArray(arr,n);
	return 0;
}