#include <iostream>
using namespace std;
int main() {
	string s;
	int a[100];
	for (int i = 0; i < 26; i++) {
		a[i] = -1;
	}
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (a[s[i] - 'a'] == -1) a[s[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++) cout << a[i] << " ";
}