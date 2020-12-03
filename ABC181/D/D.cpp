// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

bool solve(string s) {

    if (s.size() == 1)return s == "8";
    
    if (s.size() == 2) {
        if (stoi(s) % 8 == 0)return 1;
        swap(s[0], s[1]);

        return stoi(s) % 8 == 0;
    }

    vector<int> cnt(10,0);

    for (char x : s) {
        cnt[x - '0']++;
    }

    for (int i = 112; i < 1000; i+=8) {
        auto c = cnt;
        for (char x : to_string(i))c[x - '0']--;
        if (all_of(c.begin(), c.end(), [](int x) {return x >= 0; })) return 1;
    }
    return 0;
}

int main()
{
    string s;

    cin >> s;

    //for (int i = 0; i < size; i++) {
    //    cout << n[i] << endl;

    //}
   
    cout << (solve(s) ? "Yes" : "No") << endl;

    return 0;
}

