

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, k;
    int ans=0;

    cin >> a >> b >> c >> k;

    if (k > a) {
        ans += a;
        k -= a;

        if (k > b) {
            k -= b;

            ans -= k;
        }
       

    }
    else {
        ans += k;
    }

    cout << ans << endl;
}


