// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    long long ans = 0;

    

    cin >> n;
    vector<int>a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }

    cout << ans << endl;

    return 0;
}
