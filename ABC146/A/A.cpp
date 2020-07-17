//// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
////
//
//#include <iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//
//unsigned GetDigit(unsigned num) {
//    return std::to_string(num).length();
//}
//
//int main()
//{
//    long long a, b, x;
//
//    cin >> a >> b >> x;
//    long long keta = 1;
//    for (int i = 2; i <= 10; i++) {
//        int d = i;
//        if (a * pow(10, d-1) + b * d <= x)keta++;
//    }
//  //  cout << keta << endl;
//    long long n = pow(10,keta-1);
//    bool aru = false;
//    bool ok = true;
// //   cout << n << endl;
//   // n = 10e9;
//    while (a * n + b * keta <= x && ok) {
//      //  cout << n << endl;
//        aru = true;
//        if (n >= pow(10,keta)||n>=1000000000+1 )
//        { 
//         //   cout << "ww";
//            ok = false;
//            break; 
//        }
//
//        n++;
//       
//       
//    }
//    //long long ans = (x - b * keta) / a;
//    //cout << x - b * keta << endl;
//   // cout << keta << endl;
//    if (aru) {
//        cout << n-1 << endl;
//    }
//    //else if(keta==10){
//    //    cout << 1000000000 << endl;
//    //}
//    else {
//        cout << 0 << endl;
//    }
//    return 0;
//}
//
//// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
//// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー
//
//// 作業を開始するためのヒント: 
////    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
////   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
////   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
////   4. エラー一覧ウィンドウを使用してエラーを表示します
////   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
////   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
#include <iostream>
#include<string>
#include<cmath>
using namespace std;

unsigned GetDigit(unsigned num) {
	    return std::to_string(num).length();
	}

int main() {

	long long a, b, x;

	cin >> a >> b >> x;

	long long top, last,mid;
	top = 0;
	last = 1000000001;
	//if (a * last + b * GetDigit(last)<=x) {
	//	cout << last << endl;
	//	return 0;
	//}
	//if (a * top + b * GetDigit(1) > x) {
	//	cout << 0 << endl;
	//	return 0;
	//}
	while ( last-top>1) {
		 mid = (top + last) / 2;
		long long k = a * mid + b * GetDigit(mid);
		if (k <= x) {
			top = mid ;
			
		}
		else {
			last = mid;
		}
	}
	cout << top<< endl;
	return 0;
}