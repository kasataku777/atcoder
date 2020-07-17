
#include<iostream>
#include<vector>
using namespace std;

#define waru 1000000007
//int comb(int n, int a) {
//	long long kai=1;
//
//	for (int i = 1; i <= a; i++) {
//		kai*= i;
//		kai %= waru;
//	}
//	long long bunsi = 1;
//	for (int i = 0; i < a; i++) {
//		bunsi *= (n - i);
//	}
//
//
//}
//int main() {
//
//	int n,a,b;
//	long long ans = 0;
//	cin >> n>>a>>b;
//
//	for (int i = 1; i<1 << (n); i++) {
//		long long cnt = 0;
//		for (int j = 0; j < n; j++) {
//			if (i >> j & 1)cnt++;
//		}
//		if (cnt != a && cnt != b)ans++;
//	}
//
//	cout<<ans%()
//}

using ll = long long;
const int mod = 1000000007;
struct mint {
    ll x; // typedef long long ll;
    mint(ll x = 0) :x((x% mod + mod) % mod) {}
    mint operator-() const { return mint(-x); }
    mint& operator+=(const mint a) {
        if ((x += a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator-=(const mint a) {
        if ((x += mod - a.x) >= mod) x -= mod;
        return *this;
    }
    mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this; }
    mint operator+(const mint a) const { return mint(*this) += a; }
    mint operator-(const mint a) const { return mint(*this) -= a; }
    mint operator*(const mint a) const { return mint(*this) *= a; }
    mint pow(ll t) const {
        if (!t) return 1;
        mint a = pow(t >> 1);
        a *= a;
        if (t & 1) a *= *this;
        return a;
    }

    // for prime mod
    mint inv() const { return pow(mod - 2); }
    mint& operator/=(const mint a) { return *this *= a.inv(); }
    mint operator/(const mint a) const { return mint(*this) /= a; }
};

mint f(int n) {
    if (n == 0)return 1;
    mint x = f(n / 2);
    x *= x;
    if (n % 2 == 1)x *= 2;
    return x;
}
mint choose(int n, int a) {
    mint x = 1, y = 1;
    for (int i = 0; i < a; i++) {
        x *= n - i;
        y *= i + 1;
    }
    return x / y;
}
int main() {
    int n, a, b;
    cin >> n >> a >> b;

    mint ans = f( n);
    ans -= 1;
    ans -= choose(n, a);
    ans -= choose(n, b);
    cout << ans.x << endl;
    return 0;
}