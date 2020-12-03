#include<iostream>
#include<string>
#include<vector>


using namespace std;


int main() {

	int n;
	long long cnt = 0;
	cin >> n;

	for (int a = 1; a < 1000; a++) {
		for (int b = a; b <= 1000000; b++) {
			if (a * b >= n)break;
			if (a == b)cnt++;
			else cnt += 2;
		}
	}
	cout << cnt << endl;

}