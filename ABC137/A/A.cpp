#include<iostream>


using namespace std;

int main()
{

	int a, b;

	cin >> a >> b;

	int wa, seki, hiku;

	wa = a + b;
	seki = a * b;
	hiku = a - b;

	if (wa >= seki) {
		if (wa >= hiku) {
			cout << wa << endl;
		}
		else {
			cout << hiku << endl;
		}
	}
	else {
		if (seki >= hiku) {
			cout << seki << endl;
		}
		else {
			cout << hiku << endl;
		}
	}
	return 0;
}