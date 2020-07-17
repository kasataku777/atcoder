// D.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<map>

using namespace std;
typedef long long ll;

//
//void decompositPrime(long long n)
//{
//    // 割る数の初期値
//    long long  a = 2;
//    int cnt = 0;
//    // √n ≧ a ( n ≧ a * a ) の間ループ処理
//    while (n >= a * a) {
//        // a で割り切れたら、a は素因数
//        // そして、割られる数を a で割る
//        // a で割り切れなかったら、 a を 1 増加させる
//        if (n % a == 0) {
//          //  printf("%d * ", a);
//            cnt++;
//            n /= a;
//            if (cnt == 1) { v.push_back(1); }
//            else {
//                auto itr= v.end();
//                *itr++;
//
//            }
//
//            if (n == a) {
//                //cnt++;
//                //v.push_back(cnt);
//                auto itr = v.end();
//                *itr++;
//            }
//        }
//        else {
//            cnt = 0;
//            a++;
//        }
//    }
//    // 最後に残った n は素因数
//    if (n != a)v.push_back(1);
//}

int main()
{
    ll n;
    cin >> n;
    
    vector<pair<ll, int>> fs;
    for (ll i = 2; i * i <= n; i++) {
        int x = 0;
        while (n % i == 0) {
            n /= i;
            ++x;
        }
        fs.emplace_back(i, x);
    }
    if (n != 1)fs.emplace_back(n,1);

    int  ans=0;
    for (auto p : fs) {
        int x = p.second;
        int b = 1;
        while (b <= x) {
            x -= b;
            b++;
            ++ans;
        }
    }
    cout << ans << endl;


}

