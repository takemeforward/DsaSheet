#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v;

	for(int i = 1; i<=10; i++){
		v.push_back(i*i-2);
	}
	cout << v.empty() << endl;

	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	v.pop_back();
	v.pop_back();
	v.pop_back();
	cout << endl;
	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	v.insert(v.begin()+2, 10);
	cout << "3rd element is " << v[2] << endl;

	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	return 0;
}