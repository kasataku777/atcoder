#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {


	

	int n;
	int flag = 0;


	int a[200000];
	

	cin >> n;
	for (int i = 0; i < n; i++) {

		cin >> a[i];
	}

	sort(a, a + n);

	for (int i = 0; i < n-1; i++) {
		if (a[i] == a[i + 1]) {
			flag = 1;
			break;
		}
	}

	/*
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				flag = 1;
				break;
			}



		}

		if (flag == 1)break;
	}
	*/

	if (flag == 1) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
	}

	return 0;

}