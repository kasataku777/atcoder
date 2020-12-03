// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;
int main()
{
    long long n, d;

    cin >> n >> d;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        long long x, y;
        cin >> x >> y;

        double a = sqrt(x * x + y * y);
        if (a <= d) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
