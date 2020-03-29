#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int k, n,a;

	vector<int>v;

	cin >> k >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}

	int sum = 0;
	//for (int i = 0; i < n; i++) { //start
	//	for(int i=0;i<n;)
	//	int j, now,k;
	//	if(now==0)


	//}
	vector<int>distance;
	for (int i = 0; i < n-1; i++) {
		int dist = v[i+1] - v[i];
		distance.push_back(dist);
	}
	int distn = v[0] + (k - v[n - 1]);
	distance.push_back(distn);

	int max = *max_element(distance.begin(), distance.end());

	cout << k - max << endl;

	return 0;

}