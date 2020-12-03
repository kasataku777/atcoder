// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	long long n;

	cin >> n;

	long long waru = 1000000007;

	long long ans1,ans2,ans3,ans4,ansx,ansz;
	ans1 = 1;
	ans2 = 1;
	ans3 = 1;
	ans4 = 1;
	//ans = n * (n - 1) % waru;

	for (int i = 0; i < n ; i++) {
		ans1 = (ans1 * 10) % waru;
		ans2 = (ans2 * 9) % waru;
		ans3 = (ans3 * 9) % waru;
		ans4 = (ans4 * 8) % waru;
		ansz = (ans2 + ans3 - ans4);
	}
	//cout << ans1 - ans2 - ans3 + ans4 << endl;
	ansx = ans1;
	ans1 -= ans2;
	ans1 %= waru;
	ans1 += ans4;
	ans1 %= waru;
	ans1 -= ans3;
	ans1%=waru;

	if (ans1 < 0)ans1 += waru;
	//cout << (ansx-ans2-ans3+ans4)%waru << endl;
	cout << ans1 << endl;

	return 0;
}

