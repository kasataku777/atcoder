// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int k;

	cin >> k;

	string s;
	cin >> s;

	if (s.length() <= k) {
		cout << s << endl;
	}
	else {
		string ans = s.substr(0, k) + "...";
		cout << ans << endl;
	}
	return 0;
}
