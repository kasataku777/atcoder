//#include <iostream>
//#include<vector>
//using namespace std;
//#include<algorithm>
//
//
//// vectorからindex番目の要素を削除する
//template<typename T>
//void remove(std::vector<T>& vector, unsigned int index)
//{
//    vector.erase(vector.begin() + index);
//}
//int main()
//{
//    int n, a;
//    vector<int>A;
//    cin >> n; 
//    bool chofuku = false;
//    bool ok = true;
//    for (int i = 0; i < n; i++) {
//        chofuku = false;
//        ok = true;
//        scanf("%d", &a);
//        for (int j = 0; j < A.size(); j++) {
//            if (A[j] == a) {
//                remove(A, j);
//                j--;
//                chofuku = true;
//            }
//            else if (A[j] > a) {
//                if (A[j] % a == 0) {
//                    remove(A, j);
//                    j--;
//                }
//            }
//            else {
//                if (a % A[j] == 0) {
//                    ok = false;
//                    break;
//                }
//            }
//        }
//        if (chofuku == false && ok==true) {
//            A.emplace_back(a);
//        }
//        
//    }
//   
//    cout << A.size() << endl;
// ////   sort(A.begin(), A.end());
// //   //auto itrr = A.begin();
// //   int i = 0;
// //   //while (itrr != A.end()) {//
// //   while(i<A.size()){
// //       chofuku = false;
// //       //for (auto itr = ++itrr; itr != A.end(); itr++) {
// //       //    int youso = *itrr;
// //       //    if (youso == (*itr)) {
// //       //        chofuku = true;
// //       //        A.erase(itr);
// //       //    }
// //       //    else if ((*itr) % youso == 0) {
// //       //        A.erase(itr);
// //       //    }
// //       //    
// //       //}
// //       for (int j = 0; j < A.size(); j++) {
// //           if (i != j) {
// //               int youso = A[i];
// //               if (youso == A[j]) {
// //                   chofuku = true;
// //                   remove(A, j);
// //                   if(i>j)i--;
// //                   j--;
// //               }
// //               else if (A[j] % youso == 0) {
// //                   remove(A, j);
// //                   if(i>j)i--;
// //                   j--;
// //               }
// //           }
// //       }
//
// //       if (chofuku) {
// //           //A.erase(itrr);
// //           remove(A, i);
// //       }
// //       else {
// //           i++;
// //       }
//
//   // }
//  //  cout << A.size() << endl;
//    
//}
//
//

//ans

#include<iostream>
#include<vector>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;
using P = pair <int, int>;

const int M = 1000005;

int main() {
	int n;
	cin >> n;
	vector<int>a(n);
	rep(i, n)cin >> a[i];
	vector<int> cnt(M);
	for (int x : a) {
		if (cnt[x] != 0) {
			cnt[x] = 2;
			continue;
		}
		for (int i = x; i < M; i += x)cnt[i]++;
	}
	int ans = 0;
	for (int x : a) {
		if (cnt[x] == 1)ans++;
	}
	cout << ans << endl;
	return 0;
}