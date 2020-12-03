#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main() {

	int n, a, b;

	cin >> n;
	bool ok = false;
	int cnt = 0;
	for (int i = 0; i < n; i++) {

		cin >> a >> b;

		if (a == b) {
			cnt++;
		}
		else {
			cnt = 0;
		}

		if (cnt == 3) {
			ok = true;
		}

	}

	if (ok) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;

}