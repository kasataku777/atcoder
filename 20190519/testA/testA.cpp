#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main() {

	int N, K;
	string S;

	cin >> N;
	cin >> K;

	cin >> S;

	transform(S[K-1],S[K-1],S[K-1],::tolower);

	cout << S << endl;

	return 0;
}