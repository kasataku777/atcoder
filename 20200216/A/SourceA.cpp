#include<iostream>


using namespace std;

int main() {


	int a, b, c;

	cin >> a >> b >> c;


	if ((a != b && b != c && c != a) || (a == b && b == c)) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
}