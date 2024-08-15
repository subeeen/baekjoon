#include<iostream>
using namespace std;
int main() {
	string s1;
	int s2, s3;
	cin >> s1>>s2>>s3;
	while (s1 != "#") {
		if (s2 > 17 || s3 >= 80) {
			cout << s1 << " Senior\n";
		}
		else cout << s1 << " Junior\n";
		cin >> s1 >> s2 >> s3;
	}
	return 0;
}