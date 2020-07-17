// AISing.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

using ll = long long;

int main()
{
    int l, r, d;
    cin >> l >> r >> d;

    int cnt = 0;
    for (int i = l; i <= r; i++) {
        if (i % d == 0)cnt++;
    }
    cout << cnt << endl;
    return 0;
}

