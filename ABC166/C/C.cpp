// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,  m,a,b;
    vector<int> h,state;
    int height;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> height;
        h.push_back(height);
        state.push_back(1);
    }

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        if (h[a - 1] > h[b - 1]) {
            state[b - 1] = 0;
        }
        else if (h[a - 1] < h[b - 1]) {
            state[a - 1] = 0;
        }
        else {
            state[a - 1] = 0;
            state[b - 1] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (state[i] == 1)ans++;
    }

    cout << ans << endl;
}
