// A1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int sum = a + b;

    if (sum % 2 == 0) {
        cout << sum / 2 << endl;
    }
    else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}

