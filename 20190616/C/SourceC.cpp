#include<iostream>

using namespace std;

int main() {
	int w, h, x, y;
	cin >> w >> h >> x >> y;
	double ans1 = (double)w * (double)h / 2.0;
	if (x+x == w  &&y+y == h ) {
		printf("%.10f %d\n", ans1, 1);
	}
	else {
		printf("%.10f %d\n", ans1, 0);
	}

	return 0;
}