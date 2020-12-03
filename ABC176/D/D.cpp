// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


void move() {

}
int main()
{
    int h, w;
    cin >> h >> w;
    int ch, cw, dh, dw;
    cin >> ch >> cw;
    cin >> dh >> dw;
    char s[1005][1005];
    pair<int,int> state[1005][1005];
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= h; j++) {
            cin >> s[i][j];
            
        }
    }


}
