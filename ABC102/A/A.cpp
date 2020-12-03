// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
int main()
{
    int n;

    cin >> n;


    if (n % 2 == 0) {
        cout << n << endl;
    }
    else {
        cout << n * 2 << endl;
    }

    return 0;
}

