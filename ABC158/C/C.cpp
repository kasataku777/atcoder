#include<iostream>
#include<string>

using namespace std;


int main() {


	int a, b,ans;

	cin >> a >> b;

	int x = ceil(a / 0.08);

	while (true) {

		if (x >= ceil((a + 1 )/ 0.08)) {
			ans = -1;
			break;
		}

		if (x >= ceil(b / 0.10) && x < ceil((b + 1) / 0.10)) {
			ans = x;
			break;
		}

		x = x + 1;

	}

	cout << ans << endl;

	return 0;

}