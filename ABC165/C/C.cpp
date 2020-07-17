//#include <iostream>
//#include<vector>
//
//using namespace std;
//int A[10];
//int main()
//{
//    int n, m, q;
//    int a, b, c, d;
//    cin >> n >> m >> q;
//    int ans = 0;
//
//    vector<int>tmp;
//    vector<int>  arr [50];
//    for (int i = 0; i < q; i++) {
//        cin >> a >> b >> c >> d;
//        arr[i].push_back(a);
//        arr[i].push_back(b);
//        arr[i].push_back(c);
//        arr[i].push_back(d);
//
//    }
//    for (int i = 0; i <=q ; i++) {
//        for (int j = q - 1; j >= i+1; j--) {
//            if (arr[j][3] < arr[j - 1][3]) {
//                tmp = arr[j];
//                arr[j] = arr[j - 1];
//                arr[j - 1] = tmp;
//            }
//        }
//    }
//    A[0] = 1;
//    for (int i = 0; i < q; i++) {
//        //if (A[arr[i][1]] == 0) {
//        //    A[arr[i][1]]=A[arr[i][]]
//        //}
//        if (A[arr[i][0]-1] == 0 && A[arr[i][1]-1] == 0) {
//            int min = 1;
//            for (int k = 0; k < 10; k++) {
//                if (A[i] == 0)break;
//                else min = A[i];
//            }
//            A[arr[i][0] - 1] = min;
//            if (A[arr[i][0] - 1] + arr[i][2] <= m) {
//                A[arr[i][1] - 1] = A[arr[i][0] - 1] + arr[i][2];
//                ans += arr[i][3];
//            }
//        }
//        else if (A[arr[i][0]-1] != 0 && A[arr[i][1]-1] == 0) {
//            if (A[arr[i][0] - 1] + arr[i][2] <= m) {
//                A[arr[i][1] - 1] = A[arr[i][0] - 1] + arr[i][2];
//                ans += arr[i][3];
//            }
//        }
//        else if (A[arr[i][0] - 1] == 0 && A[arr[i][1] - 1] != 0) {
//            int min;
//            for (int k = arr[i][0] - 1 - 1; k >= 0; k--) {
//                if (A[k] != 0) {
//                    min = A[k];
//                    break;
//                }
//            }
//            if (min <= A[arr[i][1] - 1] - arr[i][2]) {
//                A[arr[i][0] - 1] = A[arr[i][1] - 1] - arr[i][2];
//                ans += arr[i][3];
//            }
//        }
//        else {
//            bool check = false;
//            if (A[arr[i][1] - 1] == A[arr[i][0] - 1] + arr[i][2])check = true;
//            if (check) ans += arr[i][3];
//        }
//    }
//
//    cout << ans << endl;
//
//}
//
//

#include<iostream>
#include<map>
#include <utility>
#include<vector>
#include<cmath>
#include<algorithm>
#define rep(i,n) for (int i=0;i<n;i++)
using namespace std;
using ll = long long;
using P = pair <int, int>;

int n, m, q;
vector<int>a, b, c, d;
int ans;

void dfs(vector<int> A){
	if (A.size() == n+1) {
		int now = 0;
		rep(i, q) {
			if (A[b[i]] - A[a[i]] == c[i])now += d[i];
		}
		ans = max(ans, now);
		return;
	}

	A.push_back(A.back());
	while (A.back <= m) {
		dfs(A);
		A.back()++;
	}

}

int main() {
	cin >> n >> m >> q;
	a = b = c = d = vector<int>(q);
	rep(i, q) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	dfs(vector<int>(1, 1));
	cout << ans << endl;
	return 0;
}