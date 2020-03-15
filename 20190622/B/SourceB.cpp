#include<iostream>

using namespace std;

int main() {

	int n, l;

	cin >> n >> l;

	int sum=0;

	for (int i = 0; i < n; i++) {
		sum += l + i;
	}
	if (l + n - 1 < 0) {
		cout << sum - (l + n - 1) << endl;
	}
	else if (l <= 0 && l + n - 1 >= 0) {
		cout << sum << endl;

	}
	else {
		cout << sum - l << endl;
	}

	return 0;
}