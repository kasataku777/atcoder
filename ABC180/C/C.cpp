// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long n;

    cin >> n;

    vector<long long >ans;

    for (long long i = 1; i*i <=n; i++) {

        if (n % i == 0) {
            ans.push_back(i);
            if (i * i != n) {
                ans.push_back(n / i);
            }
        }
    }


    sort(ans.begin(), ans.end());

    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;

}

