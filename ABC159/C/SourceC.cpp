#include<iostream>

using namespace std;


int main() {

	int l;
	cin >> l;

	double ll = (double)l;

	double a, b, c;
	a = ll / 3;
	b = a;
	c = a;

	double ans = a * b*c;

	printf("%.12f", ans);

	return 0;
}