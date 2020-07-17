#include<iostream>

using namespace std;


int main() {

	int n,k;

	cin >> n >> k;

	if (500 * n >= k) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}