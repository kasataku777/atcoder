#include<iostream>

using namespace std;


int main() {

	long long a, b, c, d;

	cin >> a >> b >> c >> d;

	long long ue, sita,r,tmp,x;
	long long c1 = c;
	long long d1 = d;
	x = c * d;

	if (d < c) {
		tmp = d;
		d = c;
		c = tmp;
	}

	r = d % c;
	while (r != 0) {
		d = c;
		c = r;
		r = d % c;
	}
	long long saibai = x / c;
	ue = b / c1 + b / d1 -b/saibai;
	sita = (a-1) / c1 + (a-1) / d1 - (a-1) / saibai;
	long long ans1 = b - ue;
	long long ans2 = a-1 - sita;
	long long ans = ans1 - ans2;

	cout << ans << endl;
	return 0;
}