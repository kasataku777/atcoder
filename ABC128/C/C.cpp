// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
using namespace std;


vector<int> IntegerToVector(int bit, int N) {
    vector<int> S;
    for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {
            S.push_back(i);
        }
    }
    return S;
}
int s[10][10];
int main()
{
    int n, m,k,key;
    int p[10];
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> key;
            s[i][key - 1] = 1;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> p[i];
    }
    vector<int>a(n);
    int sum = 0;
  
    for (int bit = 0; bit < (1 << n); bit++) {
        vector<int> S = IntegerToVector(bit, n);
        bool ok = true;

     
            for (int i = 0; i < m; i++) {
                int gou = 0;
                for (int j : S) {
                    if (s[i][j] == 1)gou++;
                }
                
                if (gou % 2 != p[i]) {
                    ok = false;
                    break;
                }
                
            }
            if (ok)sum++;
        

    }
    cout << sum << endl;



}

