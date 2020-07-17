//
//#include <iostream>
//#include<cmath>
//
//using namespace std;
//
//int main()
//{
//    long long a;
//    double b;
//
//    cin >> a >> b;
//
//    double ans = floor((a * b));
//   // cout << ans << endl;
//   // long long x = (long long)ans;
//
//    printf("%.0f", ans);
//
//}

#include<stdio.h>
#include<iostream>
using namespace std;
long long a[100010];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)cin >> a[i];

	int zero = 0;

	for (int i = 0; i < n; i++)if (a[i] == 0)zero++;

	if (zero > 0) {
		printf("0\n");
		return 0;
	}

	long long prod = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] <= 1000000000000000000 / prod) {
			prod *= a[i];
		}
		else {
			printf("-1\n");
			return 0;
		}
	}
	printf("%lld\n", prod);
}