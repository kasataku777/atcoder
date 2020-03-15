#include<iostream>


using namespace std;


int main() {

	int n;

	cin >> n;
	int a;
	int ans[100000];
	for (int i = 1; i <= n; i++) {
		cin >> a;
		ans[a-1] = i;

	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
		if (i == n-1)cout << endl;
	}
	
}