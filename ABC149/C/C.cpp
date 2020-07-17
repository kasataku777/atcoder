// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;


int main()
{
    int x,ans;
    cin >> x;
   // int i = x;
    while (true) {
        int i = 2;
        int flag = 0;
        while (i * i <= x) {

            if (x % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0) {
            ans = x;
            break;
        }

        x++;

    }
    cout << ans << endl;
}

