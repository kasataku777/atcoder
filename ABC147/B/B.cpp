// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s;

    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1])ans++;
    }
    cout << ans << endl;
}

