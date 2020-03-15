#include<iostream>


using namespace std;

int main() {


	int n;

	cin >> n;

	int a[100];

	for (int i = 0; i < n; i++) {


		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {

		if (a[i] % 2 == 0) {

			if (a[i] % 3 != 0 && a[i] % 5 != 0) {
				cout << "DENIED" << endl;
				break;
			}

			
		}

		if (i == n - 1)cout << "APPROVED" << endl;
	}
}