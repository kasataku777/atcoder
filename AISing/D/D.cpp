// AISing.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<intrin.h>
#include<bit>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

using ll = long long;

////int f(int pop) {
////
////}
//ll rui(int n,int pop) {
//    if (n == 0)return 1;
//    ll x = rui(n / 2,pop);
//    if (n % 2 == 1)x *= 2;
//    return x%pop;
//}
//int main()
//{
//    int n;
//    string x;
//    cin >> n;
//    cin >> x;
// //   cout << x << endl;
//    int cnt = 0;
//    for (int i = 0; i < n; i++) {
//        if (x[i]=='1' )cnt++;
//    }
//
//    vector<int>v1(n + 1);
//    vector<int>v2(n + 1);
//
//    for (int i = 0; i < n; i++) {
//        v1[i] = rui(i, cnt - 1);
//        v2[i] = rui(i, cnt + 1);
//    }
//    long long v1sum = 0;
//    long long v2sum = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (x[i] == '1') {
//            v2sum = (v2sum + v2[n-1-i]) % (cnt + 1);
//            v1sum = (v1sum + v1[n-1-i]) % (cnt - 1);
//        }
//    }
//    for (int i = 0; i < n; i++) {
//        int first;
//        if (x[i] == '1') {
//            first = (v1sum - v1[n - 1 - i]) % (cnt - 1);
//            if (first < 0)first += (cnt - 1);
//        }
//        else {
//            first = (v2sum + v2[n - 1 - i]) % (cnt + 1);
//        }
//        int ans = 1;
//
//        while (first) {
//            int key = 0;
//            int pop = 0;
//            int an = 0;
//            while (first << key) {
//                if (first << key & 1)pop++;
//                key++;
//            }
//            int key2 = 0;
//            while (first << key2) {
//                if (first << key2 & 1)an = (an + rui(key2, pop) )% pop;
//                key2++;
//            }
//            first = an;
//            ans++;
//        }
//
//        cout << ans << endl;
//
//    }
//  //  cout << cnt << endl;
//}
int pcnt(int x) {
	return __popcnt(x);
}
int f(int x) {
	if (x == 0)return 0;
	return f(x % pcnt(x)) + 1;
}

int main() {
	int n;

	cin >> n;

	string s;

	cin >> s;

	vector<int>x(n);
	rep(i, n)x[i] = s[i] - '0';
	int pc = 0;
	rep(i, n)pc += x[i];
	vector<int> ans(n);
	rep(b, 2) {
		int npc = pc;
		if (b == 0)npc++; else npc--;
		if (npc <= 0)continue;
		int r0 = 0;
		rep(i, n) {
			r0 = (r0 * 2) % npc;
			r0 += x[i];
		}
		int k = 1;
		for (int i = n - 1; i >= 0; --i) {
			if (x[i] == b) {
				int r = r0;
				if (b == 0)r = (r + k) % npc;
				else r = (r - k + npc) % npc;
				ans[i] = f(r) + 1;
			}
			k = (k * 2) % npc;
		}
	}

	rep(i, n)cout << ans[i] << endl;

	return 0;

	
}
