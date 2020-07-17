#include<iostream>
using namespace std;

int state[200005];
int a[200005];
int main() {


	long long n, k;

	for (int i = 0; i < 200005; i++) {
		state[i] = -1;
	}

	cin >> n >> k;


	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int cnt = 0;
	int now = 1;
	state[now] = 0;
	now = a[1];
	bool jyun = true;
	while (1) {
		cnt++;

		if (cnt >= k) {
			jyun = false;
			break;
		}
		else if (state[now] == -1) {
			state[now] = cnt;
			now = a[now];
		}
		else break;
		
	}
	int ans;
	if (jyun == true) {
		int jyunkan = cnt - state[now];
		long long kd = k - state[now];

		long long amari = kd % jyunkan;
		
		for (int i = 1; i < 200005; i++) {
			if (state[i] == state[now] + amari) {
				ans = i;
				break;
			}
		}
	}
	else {
		ans = now;
	}
	//cout << now << endl;
	//for (int i = 0; i <= n; i++) {
	//	cout << state[i] << " ";
	//}
	//cout << endl;
	//cout << jyunkan << endl;
	cout << ans << endl;



}