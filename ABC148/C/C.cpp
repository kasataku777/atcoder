// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

long long gcd(long long  a, long long b) {
    if (a % b == 0) {
        return b;
    }
    else {
        return gcd(b, a % b);
    }
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main()
{
    long long a, b;
    cin >> a>> b;
    long long  ans = lcm(a, b);
    cout << ans << endl;
    return 0;
}

