// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[100005];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    int ans = a[n / 2] - a[n / 2 - 1];

    cout << ans << endl;

    return 0;

}

