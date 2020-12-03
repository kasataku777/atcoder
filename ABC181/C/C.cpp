// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin >> n;
    vector<int> x(n), y(n);
    

    for (int i = 0; i < n; i++) {

        cin >> x[i] >> y[i];
    }
    bool ok = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
               /* long  double ab, bc, ca;
                ab = abs(sqrt((x[i] - x[j]) * (x[i] - x[j] )+ (y[i] - y[j]) * (y[i] - y[j])));
                bc = abs(sqrt((x[j] - x[k]) * (x[j] - x[k]) + (y[j] - y[k]) * (y[j] - y[k])));
                ca = abs(sqrt((x[k] - x[i]) * (x[k] - x[i]) + (y[k] - y[i]) * (y[k] - y[i])));*/
                int x2 = x[j] - x[i];
                int x3 = x[k] - x[i];

                int y2 = y[j] - y[i];
                int y3 = y[k] - y[i];

                if (x2 * y3 == x3 * y2) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if (ok)break;
        }
        if (ok)break;
    }

    cout << "No" << endl;
    return 0;
}

