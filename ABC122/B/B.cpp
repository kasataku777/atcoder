// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;

    cin >> s;
    int cnt = 0;
    int max = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
            cnt++;
            if (max < cnt) {
                max = cnt;
            }
        }
        else {
            cnt = 0;
        }
    }
    cout << max << endl;
    return 0;
}

