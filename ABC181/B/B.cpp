#include<iostream>


using namespace std;


int main() {
	int n;

	cin >> n;
	long long ans = 0;
	for (int i = 0; i < n; i++) {

		long long a, b;

		cin >> a >> b;

		ans += (b- a + 1) * (a + b) / 2;

	}

	cout << ans << endl;

	return 0;
}