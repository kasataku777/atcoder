#include<iostream>

using namespace std;

int main() {
	int n, x;

	cin >> n >> x;

	int l[105];
	for (int i = 0; i < n; i++) {
		cin >> l[i];
	}
	int sum = 0;
	int ans = 1;
	for (int j = 0; j < n; j++) {
		sum += l[j];
			if (sum <= x) {
				ans += 1;
			}
			else {
				break;
			}
	}

	cout << ans << endl;

	return 0;
}