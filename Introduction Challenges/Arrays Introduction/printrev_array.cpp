#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int numelements = 0;
	cin>>numelements;
	int arr[numelements];
	int i = 0;
	int num = 0;

	for(i = 0; i < numelements; i++){
		cin >> num;
		arr[i] = num;
	}

	for(i = (numelements-1); i >= 0; i--){
		cout << arr[i] << " ";
	}

	return 0;

}
