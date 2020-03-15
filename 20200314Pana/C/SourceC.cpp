#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main() {



	double a, b, c;

	cin >> a >> b >> c;
	double left = sqrt(a) + sqrt(b);
	double right = sqrt(c);
	//bool ans =( sqrt(a) + sqrt(b) < sqrt(c));

	if (left<right) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;

}