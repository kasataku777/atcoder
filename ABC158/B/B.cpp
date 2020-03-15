#include<iostream>
#include<string>

using namespace std;


int main() {


	long long n, a, b,ans;

	cin >> n >> a >> b;

	long long amari = n % (a + b);
	long long syou = n / (a + b);

	if (amari < a) {
		ans = a * syou + amari;
	}
	else {
		ans = a * syou + a;
	}

	cout << ans << endl;

	return 0;

}