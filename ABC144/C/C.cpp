#include <iostream>
#include<vector>
using namespace std;

int main()
{
    


    long long N;
    cin >> N;
    long long ans = 10000000000000;
    long long i = 1;
    while (i*i <= N) {
        if (N % i == 0) {

            long long j = N / i;

            long long tmp = i + j - 2;
            if (tmp < ans)ans = tmp;
        }

        i++;
    }
    cout << ans << endl;
    return 0;
}