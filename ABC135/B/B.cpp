﻿// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int sum = 0;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a != i + 1)sum++;
    }
    if (sum == 0 || sum == 2)cout << "YES" << endl;
    else cout << "NO" << endl;
}

