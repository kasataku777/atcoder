// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;


const long long waru = 1000000007;

long long modinv(long long a, long long m) {
    long long b = m, u = 1, v = 0;
    while (b) {
        long long t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}
long long kumi(int x, int y) {
    if (y == 1)return 1;
    long long kaix, kaiy, kaiwa,kai;
    kai = 1;
    kaiy = 1;
    for (int i = x + 1; i <= x + y - 1; i++) {
        kai *= i;
        kai %= waru;
    }
    for (int i = 1; i <= y - 1; i++) {
        kaiy *= i;
        kaiy %= waru;
    }
    return( kai *modinv ( kaiy,waru)) % waru;
    
}

int main()
{
    int s;

    long long ans = 0;

    cin >> s;

    s -= 3;
    int cnt = 1;
    while (s >= 0) {
        ans += kumi(s, cnt);
        ans %= waru;
        s -= 3;
        cnt++;
    }

    cout << ans << endl;
}


