// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;

    int b[105];
    
    for (int i = 0; i < n - 1;i++) {
        cin >> b[i];
        if (i == 0)ans += b[i];
        else ans += min(b[i - 1], b[i]);


    }
    ans += b[n - 2];
    cout << ans << endl;


    
}

