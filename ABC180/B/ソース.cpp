#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;


int main() {

	int n,b;

	cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
		
	}

	long long ans1, ans2, ans3;
	ans1 = 0;
	ans2 = 0;
	ans3 = 0;
	for (int i = 0; i < n; i++) {
		ans1 += abs(a[i]);
		ans2 += a[i] * a[i];
		ans3 = max(ans3, abs(a[i]));

	}

	


	cout << ans1 << endl;
	printf("%.14f\n", sqrt(ans2));

	cout << ans3 << endl;

	return 0;
}