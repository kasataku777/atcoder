// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;



int main()
{
    long long n, k;
    cin >> n >> k;

    long long x;
    x = n / k;

    long long a = n - (k * x);

    long long a2 = abs(a - k);
    if (a2 < a) {
        cout << a2 << endl;
    }
    else {
        cout << a << endl;
    }
}

