// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
    int n, m,a;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;

        n -= a;

    }
    
    if (n < 0) {
        cout << -1 << endl;
    }
    else {
        cout << n << endl;
    }

    return 0;
}


