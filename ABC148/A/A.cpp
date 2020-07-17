#include<iostream>

using namespace std;

int main() {


	int a, b;
	cin >> a >> b;
	int ans[4] = { 0 };

	ans[a ] = ans[b] = 1;

	for (int i = 1; i <= 3; i++) {
		if (ans[i] == 0)cout << i << endl;
	}
	return 0;



}