// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a <= 2 * b) {
        cout << 0 << endl;
    }
    else {
        cout << a - 2 * b << endl;
    }
    return 0;
}

