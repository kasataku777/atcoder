
// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int a, b, c, k;

	cin >> a >> b >> c;

	cin >> k;

	for (int i = 0; i < k; i++) {
		if (a >= b) {
			b *= 2;
		}
		else {
			c *= 2;
		}
	}

	if (a < b && b < c) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}

