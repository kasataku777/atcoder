#include<iostream>

using namespace std;

int main() {
	int p, q, r;
	cin >> p >> q >> r;
	int sum = 0;
	if (p > q) {
		if (p > r) {
			sum = q + r;
		}
		else {
			sum = p + q;
		}
	}
	else {
		if (q > r) {
			sum = r + p;

		}
		else {
			sum = p + q;
		}
	}

	cout << sum << endl;

	return 0;
}