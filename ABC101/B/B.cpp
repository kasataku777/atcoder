// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using  namespace std;
int main()
{
    int n;

    cin >> n;

    int firstn = n;

    int s=0;
    while (n != 0) {
        s += n % 10;
        n /= 10;
    }

    if (firstn % s == 0) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;

}

