#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Enter your code here. Read input from STDIN. Print output to STDOUT. */
	int n, q, size, value, index1, index2;
	cin >> n >> q;
	vector<vector<int>> nvec;
	for(int i = 0; i < n; i++){
		cin >> size;
		vector<int> ivec;
		for(int j = 0; j < size; j++){
			cin >> value;
			ivec.push_back(value);
		}
		nvec.push_back(ivec);
	}

	//Perform the queries
	for(int i = 0; i < q; i++){
		cin >> index1 >> index2;
		cout << nvec[index1][index2] << endl;
	}

	return 0;
}
