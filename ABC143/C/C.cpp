// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int sum = 1;
    string s;
   // int d[100];
    cin >> n;
    cin >> s;
    for (int i = 0; i < n-1; i++) {
        if (s[i] != s[i + 1])sum++;
    }
    cout << sum << endl;

    return 0;
}

