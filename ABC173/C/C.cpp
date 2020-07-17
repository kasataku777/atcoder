#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> IntegerToVector(int bit, int N) {
	vector<int> S;
	for (int i = 0; i < N; ++i) {
		if (bit & (1 << i)) {
			S.push_back(i);
		}
	}
	return S;
}


int main() {

	int h,w,k;
	char c;
	int ans = 0;
	cin >> h >> w >> k;
	int d[6][6];

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> c;
			
			if (c == '.') {
				d[i][j] = 0;
			}
			else {
				d[i][j] = 1;
			}
		}
	}

	for (int bit = 0; bit < (1 << h); ++bit) {
		vector<int>S = IntegerToVector(bit, h);
		for (int bit2 = 0; bit2 < (1 << w); ++bit2) {
			vector<int>S2 = IntegerToVector(bit2, w);
			int cnt = 0;
			int dx[6][6];
			for (int x = 0; x < h; x++) {
				for (int y = 0; y < w; y++) {
					dx[x][y] = d[x][y];
				}
			}
			for (int i : S) {
				for (int yoko = 0; yoko < w; yoko++) {
					dx[i][yoko] = -1;
				}
			}
			for (int i : S2) {
				for (int tate = 0; tate < h; tate++) {
					dx[tate][i] = -1;
				}
			}

			for (int i = 0; i < h; i++) {
				for (int j = 0; j < w; j++) {
					if (dx[i][j] == 1)cnt++;
				}
			}
			if (cnt == k)ans++;
		}
	}

	cout << ans << endl;
}