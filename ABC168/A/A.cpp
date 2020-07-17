// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;


    if (0 <= n && n <= 9) {
        if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
            cout << "hon" << endl;
        }
        else if (n == 0 || n == 1 || n == 6 || n == 8) {
            cout << "pon" << endl;
        }
        else {
            cout << "bon" << endl;
        }
    }
    else  {
        n = n % 10;
        if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
            cout << "hon" << endl;
        }
        else if (n == 0 || n == 1 || n == 6 || n == 8) {
            cout << "pon" << endl;
        }
        else {
            cout << "bon" << endl;
        }
    }

    return 0;

}
