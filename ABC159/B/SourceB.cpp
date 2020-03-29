#include<iostream>
#include<string>

using namespace std;

 bool isPalindrome(string string) {
	//char str[] = string.c_str();
	bool isPalindrome = true;
	int i = 0, j = string.length() - 1;
	while (isPalindrome && i <= j) {
		isPalindrome &= string[i] == string[j];
		i++;
		j--;
	}
	return isPalindrome;
}

int main() {

	string s;

	cin >> s;
	int n = (int)s.length();
	bool is_ans = true;

	//while (true) {
	//	int i = 0;
	//	if (s[i] != s[n - i - 1])is_ans = false; break;
	//	i++;
	//	if (i > n / 2)break;
	//}

	is_ans &= isPalindrome(s);
	if (n % 2 == 1) {
		string s2 = s.substr(0, (n - 1) / 2 );
		string s3 = s.substr((n + 3) / 2 - 1, n - (n + 3) / 2 + 1);
		
		//while (true) {
		//	int i = 0;
		//	if (s2[i] != s2[(n-1)/2 - i - 1])is_ans = false; break;
		//	i++;
		//	if (i > (n-1) / 2/2)break;
		//}
		//while (true) {
		//	int i = 0;
		//	if (s3[i] != s3[(n - 1) / 2 - i - 1])is_ans = false; break;
		//	i++;
		//	if (i > (n - 1) / 2/2)break;
		//}

		is_ans &= isPalindrome(s2);
		is_ans &= isPalindrome(s3);



	}
	else {
		string s2 = s.substr(0, (n - 2) / 2);
		string s3 = s.substr((n + 4) / 2-1 , n - (n + 4) / 2 +1);
		//while (true) {
		//	int i = 0;
		//	if (s2[i] != s2[(n - 2) / 2 - i - 1])is_ans = false; break;
		//	i++;
		//	if (i >= (n - 2) / 2)break;
		//}
		//while (true) {
		//	int i = 0;
		//	if (s3[i] != s3[(n - 2) / 2 - i - 1])is_ans = false; break;
		//	i++;
		//	if (i >= (n - 2) / 2 )break;
		//}

		is_ans &= isPalindrome(s2);
		is_ans &= isPalindrome(s3);
	}

	if (is_ans)cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}