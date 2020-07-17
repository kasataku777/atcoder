#include <iostream>
#include<algorithm>
using namespace std;

int main()
{

	int n, m;
	int A[1000];
	cin >> n >> m;
	double asum = 0;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		asum += A[i];
	}

	sort(A, A + n);

	bool ok = true;
	double th = asum / (m * 4);
	for (int i = 0; i < m; i++) {

		if (A[n - 1 - i] < th) {
			ok = false;
			break;
		}
	}

	if (ok)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;



}
