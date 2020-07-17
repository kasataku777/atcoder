#include <iostream>
using namespace std;

int p[101];
int x, n;

//bool search(int a[], int key,int n) {
//    if()
//}
int main()
{

  


    cin >> x >> n;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        p[a] = 1;
    }
    bool ok = true;
    int sa = 0;
    int ans;
    while (ok) {

        int m1 = x - sa;
        int m2 = x + sa;

        if (p[m1] == 0) {
            ans = m1;
            break;
        }
        if (p[m2] == 0) {
            ans = m2;
            break;
        }


        sa++;
    }
    cout << ans << endl;

    return 0;
}


