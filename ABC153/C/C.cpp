// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, k;
    long long h, ans=0;
    vector<long long> H;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> h;
        H.emplace_back(h);
    }

    sort(H.begin(), H.end(),greater<long long>());

    for (int i = k; i < n; i++) {
        ans += H[i];
       
    }
    
    cout << ans << endl;
    
}

