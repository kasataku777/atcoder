#include<iostream>
using namespace std;

int main() {
	int S;

	cin >> S;

	int kami = S / 100;
	int simo = S % 100;

	if (1 <= kami && kami <= 12) {
		if (1 <= simo && simo <= 12) {
			cout << "AMBIGUOUS" << endl;
		}
		else {
			cout << "MMYY" << endl;
		}
	}
	else {
		if (1 <= simo && simo <= 12) {
			cout << "YYMM" << endl;
		}
		else {
			cout << "NA" << endl;
		}

	}

	return 0;
}