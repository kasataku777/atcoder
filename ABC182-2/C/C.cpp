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

int main()
{
    long long n;

    cin >> n;
    long long a = n;
    long long digit = 0;
    vector<int> x;

    while (a != 0) {
        x.push_back(a % 10);
        a /= 10;
        digit++;
    }
    int sum = 0;
    for (int i = 0; i < x.size(); i++) {
        sum += x[i];
    }

   // cout << digit << endl;
    int min = digit;
    //for (int i = 0; i < x.size(); i++) {
    //    cout << x[i] << endl;
    //}
    for (int bit = 0; bit < (1 << digit); ++bit) {
        vector<int> S = IntegerToVector(bit, digit);
        int y = 0;
        int kazu = 0;
        
        for (int i = 0; i < S.size(); i++) {
            //if (S[i] == 1) {
            //    y += x[i];
            //    
            //}
            y += x[S[i]];

            
           // cout << S[i] << endl;
        }

        //if (y % 3 == 0) {
        //    if (min >  digit-S.size()) {
        //        min = digit - S.size();
        //    }

        //}
        
        if ((sum - y) % 3 == 0) {
            if (min > S.size()) {
                min = S.size();
            }
        }
    }
    if (min == digit) {
        cout << -1 << endl;
    }
    else {
        cout << min << endl;
    }
    //cout << (1 << 2) << endl;

    

    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
