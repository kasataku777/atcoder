#include<iostream>
#include<vector>

using namespace std;

int main() {


	int n, k;
	vector<int>p;
	double sum = 0;
	double max = 0;
	int input;
	vector<double>kitai;

	cin >> n >> k;



	for (int i = 0; i < n; i++) {

		cin >> input;
		p.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		kitai.push_back( 1 + 0.50*(p[i] - 1));
	}
	for (int i = 0; i < k; i++) {
		sum += kitai[i];
	}
	max = sum;


	for (int i = k; i < n; i++) {
		sum = sum + kitai[i] - kitai[i - k];

		if (sum > max) max = sum;

	}

	printf("%.12f", max);





	return 0;

}