
// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n, k;

	cin >> n >> k;
	vector<int>a(n );

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	for (int i = k; i < n; i++) {
		if (a[i] > a[i - k]) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}

