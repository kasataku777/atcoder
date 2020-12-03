// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
int main()
{
    int n;

    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = 0;
    int sum = 0;
    int ans;
    for (int i = 2; i <= 1000; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] % i == 0) {
                sum++;
            }
        }

        if (sum > max) {
            max = sum;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;

}
