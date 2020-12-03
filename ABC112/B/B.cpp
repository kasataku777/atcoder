// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>

using namespace std;
int main()
{
	int n, t;

	cin >> n >> t;
	int x, y;
	int min = 10000;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		if (y <= t) {
			if (min > x) {
				min = x;
			}
		}
	}

	if (min == 10000) {
		cout << "TLE" << endl;
	}
	else {
		cout << min << endl;
	}
}

