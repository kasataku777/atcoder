#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long x;

    cin >> x;
    long long count = 0;
    long long first = 100;
    while (true) {
        
        count++;
        first = floor(first * 1.01);
        if (first >= x)break;
    }
    cout << count << endl;

    return 0;
}


