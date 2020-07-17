#include<iostream>

using namespace std;


int main() {

	int h, w;
	cin >> h >> w;

	int H, W;
	cin >> H >> W;

	int ans = h * w;

	ans -= w * H;
	ans -= W * h;

	ans += H * W;

	cout << ans << endl;
}