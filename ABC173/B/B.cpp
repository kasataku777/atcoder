// B.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;

        if (s == "AC") {
            a++;
        }
        else if (s == "WA") {
            b++;
        }
        else if (s == "TLE") {
            c++;
        }
        else {
            d++;
        }
    }

    cout << "AC x " << a << endl;
    cout << "WA x " << b << endl;
    cout << "TLE x " << c << endl;
    cout << "RE x " << d << endl;
    

    return 0;



}

