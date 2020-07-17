// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    long long ans = 0;
    queue<int> q;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), std::greater<int>());
    
    q.push(v[0]);
    int i = 1;
    while (i < n) {
        q.push(v[i]);
        q.push(v[i]);

        ans += q.front();
        q.pop();


        i++;
    }

    cout << ans << endl;


}
