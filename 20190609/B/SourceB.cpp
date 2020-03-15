#include<iostream>
#include<stdlib.h>
using namespace std;


int w[105];
int N;
int sa(int i);
int main() {


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> w[i];
	}
	int min = 10000;
	for (int j = 0; j < N; j++) {
		int tmp = sa(j);
		if (tmp < min) {
			min = tmp;
		}
		else
		{
			break;
		}


	}

	cout << min << endl;

	return 0;


}

int sa(int i) {
	int s1=0, s2=0;
	for (int j = 0; j < i; j++) {
		s1 += w[j];
	}

	for (int j = i; j < N; j++) {
		s2 += w[j];
	}

	return abs(s1 - s2);
}