#include<iostream>

using namespace std;


int main() {

	int a[3][3];
	int a2[3][3] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}

	int n;
	int b[10];
	cin >> n;
	int ans=0;
	for (int k = 0; k < n; k++) {
		cin >> b[k];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (a[i][j] == b[k])a2[i][j] = 1;

			}
		}
	}
	for (int i = 0; i < 3; i++) {
		if (a2[i][0] == 1 && a2[i][1] == 1 && a2[i][2] == 1)ans = 1;
		if (a2[0][i] == 1 && a2[1][i] == 1 && a2[2][i] == 1)ans = 1;

	}
	if (a2[0][0] == 1 && a2[1][1] == 1 && a2[2][2] == 1)ans = 1;
	if (a2[2][0] == 1 && a2[1][1] == 1 && a2[0][2] == 1)ans = 1;

	if (ans == 1)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}