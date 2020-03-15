#include<iostream>
#include<string>
using namespace std;

int main() {
	char s[10];

	cin >> s;
	string ans ="Good";
	for (int i = 0; i < 3; i++) {
		if (s[i] == s[i + 1]) ans = "Bad";

	}

	cout << ans << endl;
	return 0;
}