#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main() {

	int n;

	cin >> n;

	string s;

	cin >> s;

	
	for (int i=0; i < s.size(); i++) {
		if ((s[i] + n - 'A' <= 25)) {
			printf("%c", s[i] + n);
		}
		else {
			printf("%c", s[i] + n - 26);
		}
	}
	cout << endl;
	return 0;


}