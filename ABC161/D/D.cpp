// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
using ll = long long;
using namespace std;

int main()
{
    int k;
    cin >> k;
    vector<ll>a;
    for (int i = 1; i <= 9; i++)a.push_back(i);
    while (1) {
        if (k <= a.size()) {
            cout << a[k - 1] << endl;
            return 0;
        }
        k -= a.size();
        vector<ll>old;
        swap(a, old);
        for (ll x : old) {
            for (int i = -1; i <= 1; i++) {
                int d = x % 10 + i;
                if (d < 0 || d>9)continue;
                ll nx = x * 10 + d;
                a.push_back(nx);
            }
        }
    }
    return 0;
}

