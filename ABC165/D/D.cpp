#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	long long a, b, n;
	long long x;
	cin >> a >> b >> n;

	if (n >= b)x = b - 1;
	else x = n ;

	cout << floor(a * x / b) << endl;

}


