//// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
////
//
//#include <iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int kumi[100005][26];
//int rui[100005];
//
//void inskumi(string s,int key) {
//    for (int i = 0; i < 10; i++) {
//        kumi[key][s[i] - 'a']++;
//    }
//}
//
//void check(int key) {
//    for (int i = 0; i < key; i++) {
//        bool ok = true;
//        for (int j = 0; j < 26; j++) {
//            if (kumi[i][j] != kumi[key][j]) {
//                ok = false;
//                break;
//            }
//        }
//        if (ok == true) {
//            rui[i]++;
//            break;
//        }
//    }
//}
//int  ruiwa(int x) {
//    int sum = 0;
//    for (int i = x; i > 0; i--) {
//        sum += i;
//    }
//    return sum;
//}
//int main()
//{
//    int n;
//
//    cin >> n;
//
//    for (int i = 0; i < n; i++) {
//        string s;
//        cin >> s;
//        inskumi(s, i);
//        check(i);
//
//    }
//    long long  ans = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (rui[i] != 0) {
//            ans += ruiwa(rui[i]);
//        }
//    }
//    cout << ans << endl;
//
//}
//


#include<iostream>
#include<map>
#include<algorithm>
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace  std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	map<string, int>mp;
	rep(i, n) {
		string s;
		cin >> s;
		sort(s.begin(), s.end());
		mp[s]++;
	}
	ll ans = 0;
	for (auto& p : mp) {
		int s = p.second;
		ans += (ll)s * (s - 1) / 2;
	}
	cout << ans << endl;
	return 0;
}