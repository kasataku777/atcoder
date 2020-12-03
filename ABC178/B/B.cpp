// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

	long long a, b, c, d, m, x;

	cin >> a >> b >> c >> d;

	x = a * c;
	m = x;

	x = a * d;

	m = max(m, x);

	x = b * c;

	m = max(m, x);

	x = b * d;


	m = max(m, x);

	cout << m << endl;

	return 0;
}

