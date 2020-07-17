
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[25], b[25], c[25];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        cin >> c[i];
    }

    for (int i = 1; i <= n; i++) {
        int key = a[i];
        ans += b[key];
        if (i != 1 && key - 1 == a[i - 1])ans += c[key - 1];
    }
    cout << ans << endl;
    return 0;

}

