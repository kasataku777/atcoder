#include<iostream>

using namespace std;

int main() {

	int x;

	cin >> x;

	cout << 1000 * (x / 500) + ((x % 500)/5)*5 << endl;

	return 0;
}