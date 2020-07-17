// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
int main()
{
    int n, r;

    cin >> n >> r;

    if (n < 10) {

        cout << r + (10 - n) * 100 << endl;
    }
    else {
        cout << r << endl;
    }
    return 0;
}