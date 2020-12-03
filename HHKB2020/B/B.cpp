// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
int x[102][102];
int main()
{
    int h, w;
    int cnt = 0;

    cin >> h >> w;
    string s;
    

    for (int i = 0; i < 102; i++) {
        for (int j = 0; j < 102; j++) {
            x[i][j] = 5;
        }
    }
    for (int i = 0; i < h; i++) {
        cin >> s;
        for (int j = 0; j < w; j++) {
            
            if (s[j] == '.') {
                x[i][j] = 0;
            }
            else {
                x[i][j] = 1;
            }
        }

    }

    //for (int i = 0; i < h+1; i++) {
    //   
    //    for (int j = 0; j < w+1; j++) {

    //        cout << x[i][j] << endl;
    //    }

    //}

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (x[i][j] == 0 && x[i][j + 1] == 0) {
                cnt++;
            }
            
            
            if (x[i][j] == 0 && x[i + 1][j] == 0) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
