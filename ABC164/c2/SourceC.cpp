#include<iostream>
#include<set>
#include<string>
using namespace std;

int main() {

	int n;
	cin >> n;

	set<string>st;
	string a;

	for (int i = 0; i < n; i++) {
		cin >> a;
		st.insert(a);
	}

	cout << st.size() << endl;

	return 0;


	
}