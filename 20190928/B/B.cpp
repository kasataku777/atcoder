
#include<iostream>

using namespace std;

int main() {

	int n, k,h;

	cin >> n >> k;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> h;

		if (h >= k) sum++;


	}
	cout << sum << endl;

	return 0;

}