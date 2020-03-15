#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main() {


	

	long long h,w,ans;

	cin >> h>>w;

	if (h % 2 == 1 && w % 2 == 1) {
		 ans =ceil( h * w / 2) + 1;
	}
	else {
		ans = h * w / 2;
	}

	printf("%lld\n", ans );

	return 0;

}