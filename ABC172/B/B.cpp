// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    string s, t;
    int cnt = 0;
    cin >> s >> t;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != t[i])cnt++;
    }
    cout << cnt << endl;
}

