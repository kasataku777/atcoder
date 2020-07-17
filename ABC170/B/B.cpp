#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;

    int tsuru = 4 * x - y;
    int kame = y - 2 * x;

    if (tsuru >= 0 && tsuru % 2 == 0) {
        if (kame >= 0 && kame % 2 == 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    return 0;

}


