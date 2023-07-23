#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v(2,10);
	vector<int> vec(2,100);

	vec.insert(vec.end(), v.begin(), v.end());

	cout << vec.back() << endl;
	cout << vec[vec.size()-1] << endl;

	// cout << *(vec.end()-1) << endl;
	// for(auto e: vec){
	// 	cout << e << " ";
	// }
	// cout << endl;
	// for(int i = 0; i<vec.size(); i++){
	// 	cout << vec.at(i) << endl;
	// }
	return 0;
}