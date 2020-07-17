#include<iostream>
using namespace std;


int main() {


	int n, m;

	cin >> n;
	int min = 10000000;
	int ans = 0;
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (min > a) {
			min = a;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}