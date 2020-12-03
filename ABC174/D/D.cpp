// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    int n;

    cin >> n;

    string s;
    cin >> s;

    int left = 0;
    int right = n - 1;
    int cnt = 0;
    while (1) {

        if (left >= right)break;
        if (s[left] != 'W') {
            left++;
        }
        if (s[right] != 'R') {
            right--;
        }

        if (s[left] == 'W' && s[right] == 'R') {
            cnt++;
            left++;
            right--;
       }
        
    }
    cout << cnt << endl;
    return 0;
}
