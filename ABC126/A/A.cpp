#include<iostream>

using namespace std;



int main() {

	string s;
	int n, k;

	cin >> n >> k;
	cin >> s;

	if (s[k - 1] == 'A') {
		s[k - 1] = 'a';
	}
	else if (s[k - 1] == 'B') {
		s[k - 1] = 'b';
	}
	else {
		s[k - 1] = 'c';
	}
	
	cout << s << endl;

	return 0;


}