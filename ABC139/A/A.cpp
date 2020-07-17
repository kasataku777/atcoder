// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, t;

    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (s[i] == t[i])ans++;
    }

    cout << ans << endl;
}

