#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	for (int i= 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++){
		cout << accumulate(v.begin(), v.end(), 0) - v[i] << endl;
	}
}