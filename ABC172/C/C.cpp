// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    long long n, m, k,x;
    vector<long long>a, b;

    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> x;
        a.emplace_back(x);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        b.emplace_back(x);
    }
 //   a[n] = 10000000000;
   // b[m] = 10000000000;
   /* long long sum = 0;
    int akey = 0;
    int bkey = 0;
    int ans = 0;*/

    vector<long long >asum(n+1), bsum(m+1);
    vector<double >cospa(n + 1), cospab(m + 1);
    asum[0] = 0;
    bsum[0] = 0;
    long long ans = 0;
    bool ac = true;
    int amax, bmax;

    for (int i = 1; i <= n; i++) {
        asum[i] = asum[i - 1] + a[i - 1];
    }
    for (int i = 1; i <= m; i++) {
        bsum[i] = bsum[i - 1] + b[i - 1];
    }

    int mmax = m;
  
    for (int i = 0; i <= n; i++) {
        if (asum[i] > k)break;
        for (int j = mmax; j >= 0; j--) {
            if (asum[i] + bsum[j] <= k) {
                mmax = j;
                if (i + j > ans)ans = i + j;
                break;
            }

        }
    }
    cout << ans << endl;
    return 0;
}

