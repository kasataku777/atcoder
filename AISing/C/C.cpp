// AISing.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

using ll = long long;

int main()
{
    int n;
    
    cin >> n;
    vector<int>v(n + 1, 0);

    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            for (int z = 1; z <= 100; z++) {
                int f = x * x + y * y + z * z + x * y + y * z + z * x;
                if (f > n)break;
                //if(x==y && x==z){v[f]+=1 }
                //else if (x == y || x == z || y == z) {

                //}
                v[f]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << v[i] << endl;
    }
}

