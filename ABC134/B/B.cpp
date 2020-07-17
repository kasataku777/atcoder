// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
    int n, d;

    cin >> n >> d;

    int hitori = 2 * d + 1;

    if (n % hitori == 0) {
        cout << n / hitori << endl;
    }
    else {
        cout << n / hitori + 1 << endl;
        
    }
    return 0;
}

