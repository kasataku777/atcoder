#include <iostream>
#include<cmath>
using namespace std;


//int main()
//{
//    int x, a, b,k,l,syou;
//    bool ok = false;
//    int ans1 = 0;
//    int ans2 = 0;
//    cin >> x;
//
//    if (x >= 0) {
//        for (int i = 1; i <= x; i++) {
//            if (x % i != 0) {
//                continue;
//            }
//            else {
//                syou = x / i;
//                b = -x;
//                while (true) {
//                    a = b + i;
//                    k = a * a * a * a + a * a * a * b + a * a * b * b + a * b * b * b + b * b * b * b;
//                    if (k == syou) {
//                        ans1 = a;
//                        ans2 = b;
//                        ok = true;
//                        break;
//                    }
//                    if (b > k)break;
//                    b++;
//                }
//                if (ok)break;
//            }
//
//        }
//
//    }
//    else {
//
//        x = abs(x);
//        for (int i = 1; i <= x; i++) {
//            if (x % i != 0) {
//                continue;
//            }
//            else {
//                syou = x / i;
//                a = -x;
//                while (true) {
//                    b = a + i;
//                    k = a * a * a * a + a * a * a * b + a * a * b * b + a * b * b * b + b * b * b * b;
//                    if (k == syou) {
//                        ans1 = a;
//                        ans2 = b;
//                        ok = true;
//                        break;
//                    }
//                    if (a > k)break;
//                    a++;
//                }
//            }
//            if (ok)break;
//        }
//
//
//    }
//
//    cout << ans1 << " " << ans2 << endl;
//    return 0;
//}

int main() {
	int x;
	bool ok = false;
	int a, b;
	cin >> x;
	int left;
	for ( a = -118; a <= 119; a++) {
		for ( b = -119; b <= 118; b++) {
			left = a * a * a * a * a - b * b * b * b * b;
			if (left == x) {
				ok = true;
				break;
			}
			
		}
		if (ok)break;
	}

	cout << a << " " << b << endl;
}