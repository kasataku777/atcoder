// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int bufp[9], bufq[9];

int kaijyo(int n) {

    int ans = 1;

    for (int i = n; i >= 1; i--) {
        ans *= i;
    }

    return ans;
}

int order(int A[], int n) {
    int num = 1;
    for (int i = 0; i < n-1; i++) {
        int a = A[i];
        int jyun = 0;
        for (int j = 1; j < a; j++) {
            if (bufp[j] == 0)jyun++;
        }
        bufp[a] = 1;

        num += jyun * kaijyo(n - i - 1);

    }

    return num;
}

int main()
{
    int n;

    cin >> n;

    int p[9], q[9];



    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    
    int a = order(p, n);
    for (int i = 0; i < 9; i++) {
        bufp[i] = 0;
    }
    int b = order(q, n);

    //cout << a << endl;
    //cout << b << endl;
    //cout << kaijyo(2) << endl;
    if (a >= b)cout << a - b << endl;
    else cout << b - a << endl;

    return 0;

}

