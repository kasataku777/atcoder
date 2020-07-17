// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int d[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    for (int i = 0; i < n - 1;i++) {
        for (int j = i + 1; j < n; j++) {
            sum += d[i]*d[j]; 
        }
    }
    cout << sum << endl;

    return 0;
}

