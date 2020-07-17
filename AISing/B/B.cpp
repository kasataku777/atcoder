// AISing.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

using ll = long long;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i % 2 == 1 && a % 2 == 1)cnt++;
    }

    cout << cnt << endl;
    return 0;
}

