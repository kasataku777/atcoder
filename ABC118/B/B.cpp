// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> cnt(m + 5, 0);

    
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a;

        for(int i = 0; i < a; i++) {
            cin >> b;

            cnt[b]++;
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++) {
        if (cnt[i] == n)ans++;
    }
    cout << ans << endl;

    return 0;

}

