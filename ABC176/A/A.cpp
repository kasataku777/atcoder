// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    int n, x, t;

    cin >> n >> x >> t;

    int a = n / x;
    int b = n % x;

    if (b != 0)a++;

    cout << t * a << endl;

    return 0;
}
