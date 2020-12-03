// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int>v(k + 1, 0);
    int cnt = 2;
    int x = 7;
    int y;
    if (x % k == 0) {
        cout << 1 << endl;
        return 0;
    }
    x = x % k;
    v[x] = 1;
    while (1) {

        y = (10*x+7) % k;

        if (y == 0) {
            break;
        }
        if (v[y] == 0) {
            v[y] = 1;
        }
        else {
            cout << -1 << endl;
            return 0;
        }
        x = y;
        cnt++;
        
    }

    cout << cnt << endl;
}
