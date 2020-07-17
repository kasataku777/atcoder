// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
int main()
{
    int a, b,kai;
    int ans = 0;


    cin >> a >> b;
    for (int i = 0; i <= 20; i++) {
       
        if (i == 0) {
            kai = 1;
        }
        else {
            kai = a + (a - 1) * (i - 1);
        }

        if (kai >= b) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
   
}

