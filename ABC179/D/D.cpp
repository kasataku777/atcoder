#include<iostream>
#include<string>
#include<algorithm>
#include<vector>


using namespace std;

const int waru = 998244353;

int main() {

	int n, k;

	cin >> n >> k;
	vector<long long> l(k), r(k);
	for (int i = 0; i < k; i++) {
		cin >> l[i] >> r[i];
	}
	vector<long long>dp(n + 1);
	vector<long long>dpsum(n + 1);


	dp[1] = 1;
	dpsum[1] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < k; j++) {
			int li = i - r[j];
			int ri = i - l[j];
			if (ri < 0) continue;
			li = max(li, 1);
			dp[i] += (dpsum[ri] - dpsum[li - 1]);
			dp[i] %= waru;
		}
		dpsum[i] = (dpsum[i - 1] + dp[i]);
	}
	cout << dp[n] << endl;
	return 0;
}