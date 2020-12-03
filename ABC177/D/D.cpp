// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//int main()
//{
//    int n, m;
//
//    cin >> n >> m;
//
//    vector<int> g(n+1,0);
//    vector<int> cnt(n+1,0);
//    int num = 1;
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//
//        if (g[a] == 0 && g[b] == 0) {
//            g[a] = num;
//            g[b] = num;
//            cnt[num] += 2;
//            num++;
//        }
//        else if (g[a] == 0) {
//            g[a] = g[b];
//            cnt[g[a]]++;
//        }
//        else if (g[b] == 0) {
//            g[b] = g[a];
//            cnt[g[b]]++;
//        }
//        else {
//            if (g[a] == g[b]) {
//
//            }
//            else {
//                if (cnt[g[a]] >= cnt[g[b]]) {
//                    for (int i = 1; i <= n; i++) {
//                        if (g[i] == g[b])g[i] = g[a];
//                        cnt[g[a]]++;
//                    }
//                    
//                }
//                else {
//                    for (int i = 1; i <= n; i++) {
//                        if (g[i] == g[a])g[i] = g[b];
//                        cnt[g[b]]++;
//                    }
//                }
//            }
//        }
//    }
//    int max = 0;
//    for (int i = 1; i < cnt.size(); i++) {
//        if (max < cnt[i])max = cnt[i];
//    }
//
//    cout << max << endl;
//
//}

struct UnionFind {
	vector<int> r;

	UnionFind(int N) {
		r = vector<int>(N, -1);
	}
	int root(int x) {
		if (r[x] < 0)return x;
		return r[x] = root(r[x]);
	}

	bool unite(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y)return false;
		if (r[x] > r[y])swap(x, y);
		r[x] += r[y];
		r[y] = x;
		return true;
	}

	int size(int x) {
		return -r[root(x)];
	}
};

int main() {

	int n, m;
	
	    cin >> n >> m;
	
	   
	   

		UnionFind UF(n);

		for (int i = 0; i < m; i++) {
			int a, b;
			cin >> a >> b;
			a -= 1; b -= 1;
			UF.unite(a, b);
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans = max(ans, UF.size(i));
		}

		cout << ans << endl;

			return 0;
}