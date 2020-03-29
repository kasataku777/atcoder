#include<iostream>
#include<algorithm>

using namespace std;


int main() {

	int n, x, y;

	cin >> n >> x >> y;


	int ans[2005] = { 0 };

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int min1 = min(abs(i - x), abs(i - y));
			int min2 = min(abs(j - x), abs(j - y));
			int min = (j - i, min1 + 1 + min2);
			ans[min]++;
		}


	}

	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}
}