// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    if (a - b >= c) {
        cout << 0 << endl;
    }
    else {
        cout << c-(a - b)  << endl;
    }
    return 0;
}

