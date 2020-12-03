// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
  //  bool ok = false;
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 20; j++) {
            if (4 * i + 7 * j == n) {
               // ok = true;
                cout << "Yes" << endl;
                return 0;
                break;
            }
        }

        //if (ok)break;
    }
    cout << "No" << endl;

    return 0;
}

