#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

unsigned GetDigit(unsigned num) {
	return std::to_string(num).length();
}

int main() {

	long long a,b,x;

	cin >> a >> b >> x;

	long long min = (x - 9 * b) / a-1;
	long long max = (x - b) / a;

	if (min >= 100000000)cout << 1000000000 << endl;
	if (max <= 0)cout << 0 << endl;


			cout << (x-b*GetDigit(max))/a << endl;
			
		

	

	return 0;


}