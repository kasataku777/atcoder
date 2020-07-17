#include <iostream>

using namespace std;

int main()
{
    int k, a, b;

    cin >> k >> a >> b;
    bool ok = false;
    for (int i = a; i <= b; i++) {

        if (i % k == 0) {
            ok = true;
            break;
        }
    }
    cout << (ok ? "OK" : "NG" )<< endl;
    return 0;
}


