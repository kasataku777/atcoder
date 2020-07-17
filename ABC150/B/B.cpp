// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;


int main()
{
    int n;
    string s,s2;
    int ans = 0;
    cin >> n;
    cin >> s;

    for (int i = 0; i <= n-3; i++) {
        s2 = s.substr(i, 3);
        if (s2 == "ABC") {
            ans++;
        }
    }

    cout << ans << endl;
}

