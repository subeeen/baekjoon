#include<iostream>
using namespace std;
int main() {
	string s;
	int result;
	cin >> s;
	while (s != "0") {
		result = 1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] != s[s.length() - 1 - i])
			{ result = 0; }
			}
		if (result == 1) cout << "yes\n";
		else cout << "no\n";
		cin >> s;
	}
	return 0;
}