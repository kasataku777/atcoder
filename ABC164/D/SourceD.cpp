#include<iostream>
#include<vector>
#include<string>
using namespace std;

//int sum[200001];
//int main() {
//	string s;
//	cin >> s;
//
//	int num;
//	int leng = (int)(s.length());
//	int key;
//	for (int i = leng - 4; i >= 0; i--) {
//		bool suc = false;
//		for (int j = 4; j <= leng - i; j++) {
//			
//			num = stoi(s.substr(i, j));
//			//cout << s.substr(i,j);
//			key = i + j - 1;
//			if (num % 2019 == 0) {
//				suc = true;
//				break;
//
//			}
//		}
//		if(suc)sum[i] = sum[key] + 1;
//		else sum[i] = sum[key];
//	}
//	int ans=0;
//
//	for (int i = 0; i <= leng- 1; i++) {
//		ans += sum[i];
//	}
//	//cout << leng << endl;
//	cout << ans << endl;
//}

#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;
using P = pair<int, int>;

const int m = 2019;

int main() {
	string s;
	cin >> s;
	int n = s.size();
	reverse(s.begin(), s.end());
	int x = 1, tot = 0;
	vector<int>cnt(m);
	ll ans = 0;
	rep(i, n) {
		cnt[tot]++;
		tot += (s[i] - '0') * x;
		tot %= m;
		ans += cnt[tot];
		x = x * 10 % m;
	}
	cout << ans << endl;
	return 0;
}