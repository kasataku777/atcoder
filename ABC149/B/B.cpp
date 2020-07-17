// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;


int main()
{
    long long  a, b, k;


    cin >> a >> b >> k;
    if (a >= k) {

        a -= k;
    }
    else {
        k -= a;
        a = 0;


        if (b >= k) {
            b -= k;
        }
        else {
            b = 0;
        }
    }
    cout << a << " " << b << endl;
}
