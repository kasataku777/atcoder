// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
int main()
{
    int k, x;

    cin >> k >> x;

    for (int i = x - k + 1; i <= x + k - 1; i++) {
        cout << i << endl;
    }
    return 0;
}
