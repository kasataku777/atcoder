// C.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

using namespace std;

typedef long long ll;


int main() {
	ll a;
	double b;
	cin >> a >> b;
	ll ib = b * 100 + 0.5;
	a *= ib;
	a /= 100;
	printf("%lld\n", a);
	return 0;
}