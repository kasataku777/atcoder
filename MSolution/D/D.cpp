
// A.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	int n;

	cin >> n;

	vector<int>a(n);
	vector<int>b(n-1);


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n-1; i++) {
		if (a[i] < a[i + 1]) {
			b[i] = 0;
		}
		else if (a[i] == a[i + 1]) {
			b[i] = 1;
		}
		else {
			b[i] = 2;
		}
	}
	bool state = 0;
	long long syoji = 1000;
	int kabu = 0;
	for (int i = 0; i < n-1; i++) {
		if (a[i]<a[i+1]) {
			
				syoji += (a[i + 1] - a[i]) * (syoji / a[i]);
			
		}


	}



	//for (int i = 0; i < n-1; i++) {
	//	cout << b[i] << endl;
	//}

	cout << syoji << endl;
	return 0;

}

