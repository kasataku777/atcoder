// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string s, t;
    string ans = "";
    cin >> n;

    cin >> s >> t;

   // cout << s[1] << endl;

    for (int i = 0; i < n; i++) {
        ans += s[i];
        ans += t[i];
    }

    cout << ans << endl;


}