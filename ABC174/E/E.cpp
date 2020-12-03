// E.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;

    cin >> n >> k;
    vector<int>a;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(),greater<int>());

    int x = k % n;


}

