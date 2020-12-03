// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;

    int min = 100000;

    for (int i = 0; i <= (s.size() - t.size());i++) {
        int sum = 0;
        for (int j = i; j < i + t.size(); j++) {
           

            if (s[j] != t[j-i]) {
                sum++;
            }
        }
    //    cout << sum << endl;
        if (sum < min) {
            min = sum;
        }

    }
    cout << min << endl;

    return 0;
}

