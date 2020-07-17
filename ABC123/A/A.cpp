// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
int main()
{
    int a, b, c, d, e, k;

    cin >> a >> b >> c >> d >> e >> k;

    if (e - a <= k) {
        cout << "Yay!" << endl;
    }
    else {
        cout << ":(" << endl;
    }

    return 0;
}

