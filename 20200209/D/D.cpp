#include<iostream>

using namespace std;

int main() {


	int n, k;
	int p[200000];
	double sum=0;
	double max = 0;
	double kitai[200000];

	cin >> n >> k;


	
	for (int i = 0; i < n; i++) {

		cin >> p[i];
	}

	for (int i = 0; i < n; i++) {
		kitai[i] = 1 + 0.50*(p[i] - 1);
	}
	for (int i = 0; i < k; i++) {
		sum += kitai[i];
	}
	max = sum;


	for (int i = k; i < n ; i++) {
		sum = sum+kitai[i] - kitai[i - k];

		if (sum > max) max = sum;

	}

	cout << max << endl;





	return 0;

}