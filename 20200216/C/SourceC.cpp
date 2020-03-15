#include<iostream>
#include<string>
#include<map>


using namespace std;

int main() {


	map<string, int> map;

	int n;

	cin >> n;


	string s;

	for (int i = 0; i < n; i++) {

		cin >> s;

		if (map.count(s) == 0) {

			map[s] = 1;
		}
		else {
			map[s]++;
		}
	}
	int max = 0;

	for (auto i = map.begin(); i != map.end(); i++) {
		if (max < i->second)max = i->second;
	}
	for (auto i = map.begin(); i != map.end(); i++) {
		if (i->second == max)cout << i->first << endl;
	}
}