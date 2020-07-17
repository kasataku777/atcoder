//#include <iostream>
//using namespace std;
//#include<vector>
//
//int n, m, x;
//int max2 = 100000000;
//bool flag = false;
//int ans[12];
//int c[12];
//int a[12][12];
//int sum;
//
//
//// 実際に組合せを生成する
//// comb: 生成された組合せ配列
//// step: n桁目までが生成されていることを示す。
//// init: その桁始まりの数を示す。
//void makeCombination(vector<int> comb, int n, int r, int step, int init) {
//    // r桁すべてが生成された
//    if (step == r) {
//        //for (int j = 0; j < r; ++j) {
//        //    cout << comb[j] << " ";
//        //}
//        //cout << endl;
//        //++cnt;
//        bool ok = true;
//        sum = 0;
//        for (int i = 0; i < m; i++) {
//            ans[i] = 0;
//        }
//        for (int j = 0; j < r; j++) {
//            for (int k = 0; k < m; k++) {
//                ans[k] += a[comb[j]][k];
//            }
//            sum += c[comb[j]];
//        }
//        for (int i = 0; i < m; i++) {
//            if (ans[i] < x)ok = false;
//        }
//        if (ok == true) {
//            flag = true;
//            if (sum < max2)max2 = sum;
//        }
//        return;
//    }
//
//    // 全桁生成されていない
//    for (int i = init; i <= n - r + step; ++i) {
//        comb.push_back(i);
//        makeCombination(comb, n, r, step + 1, i + 1);
//        // ここで配列から一つ排除しないと困ったことになる
//        comb.pop_back();
//    }
//}
//
//// makeCombinationに値を渡すためだけの関数
//// n個の中からr個選択する
//void combination(int n, int r) {
//    vector<int> comb;
//    makeCombination(comb, n, r, 0, 0);
//}
//
////int main(void) {
////    combination(7, 3);
////    //cout << cnt;
////    return 0;
////}
//
//
//int main()
//{
//
//
//   
//    cin >> n >> m >> x;
//
//    for (int i = 0; i < n; i++) {
//        cin >> c[i];
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//        }
//
//    }
//
//    for (int i = 1; i <= m; i++) {
//
//        combination(n, i);
//
//
//    }
//    if (flag) {
//        cout << max2 << endl;
//    }
//    else {
//       
//        cout << -1 << endl;
//    }
//
//
//
//}
//
//
//
//
//


// kaisetsu

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
using ll = long long;
using P = pair<int, int>;

int a[12][12];

const int INF = 1001001001;
int main() {
	int n, m, x;
	cin >> n >> m >> x;
	vector<int>c(n);
	rep(i, n) {
		cin >> c[i];
		rep(j, m)cin >> a[i][j];
	}

	int ans = INF;

	rep(s, 1 << n) {
		int cost = 0;
		vector<int>d(m);
		rep(i, n) {
			if (s >> i & 1) {
				cost += c[i];
				rep(j, m)d[j] += a[i][j];
			}
		}
		bool ok = true;
		rep(j, m)if (d[j] < x)ok = false;
		if (ok)ans = min(ans, cost);
	}
	if (ans == INF)cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}