#include<iostream>
#include<string>
using namespace std;


int main() {


	int a, b;

	cin >> a >> b;

	if (a>=b) {
		string s = to_string(b);
		//string S = string(a, s.c_str());
		string out;
		for (int i = 0; i < a; i++) {
			out += s;
		}
		cout <<  out << endl;
	}
	else {
		string s = to_string(a);
		//string S = string(a, s.c_str());
		string out;
		for (int i = 0; i < b; i++) {
			out += s;
		}
		cout << out << endl;
	}
	return 0;
}