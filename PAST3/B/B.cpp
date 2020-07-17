// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n, m, q;

    cin >> n >> m >> q;
    vector<int> score(n,0);
    vector<int>question(m, n);
    vector<vector<int>> state(n);
    for (int i = 0; i < q; i++) {
        int a, b, c;

        cin >> a;

        if (a == 1) {
            cin >> b;
            int ans = 0;
            for (int i = 0; i < state[b - 1].size(); i++) {
                ans += question[state[b - 1][i]];
            }
            cout << ans << endl;
        }
        else {
            cin >> b >> c;

            state[b - 1].push_back(c - 1);
            question[c - 1]--;
        }
    }

    return 0;
}

