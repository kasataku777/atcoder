// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
int main()
{
    int n, k, d, a;
    int ok[100]={ 0};
    int ans = 0;
    cin >> n >> k;


    for (int i = 0; i < k; i++) {
        cin >> d;

        for (int i = 0; i < d; i++) {
            cin >> a;
            ok[a - 1] = 1;

        }


    }

    for (int i = 0; i < n; i++) {
        if (ok[i] == 0)ans++;
    }
    cout << ans << endl;

}