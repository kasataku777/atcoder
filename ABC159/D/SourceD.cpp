#include<iostream>
#include<vector>

using namespace std;


int main() {

	int n;

	cin >> n;


	int k;
	vector<int> a;
	for (int i = 0; i < n; i++) {

		cin >> k;
		a.push_back(k);
	}

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (a[i] == a[j])cnt++;
		}
		cnt--;

		cout << cnt * (cnt - 1) / 2 << " ";
	}

	cout << endl;

	return 0;
}