#include<iostream>
#include<string>

using namespace std;

int main() {

	int n;

	cin >> n;

	int base = 1000;
	int i = 1;
	int en=0;
	while (en < n) {
		
		en = i * base;
		i++;

	}

	cout << en - n << endl;
}