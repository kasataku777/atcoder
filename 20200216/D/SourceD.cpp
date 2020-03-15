#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {



	int n, k;

	int b;
	vector<long long> a1;
	vector<long long> a2;
	long long c;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> b;

		a1.push_back(b);

	}

	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			c = a1[i] * a1[j];
			a2.push_back(c);
		}
	}
	sort(a2.begin(), a2.end());

	cout << a2[k - 1] << endl;

}