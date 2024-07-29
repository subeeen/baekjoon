#include <iostream>
using namespace std;
int main() {
	int t,r;
	string s;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> r >> s;

		for (int z = 0; z < s.length(); z++) {
			for (int j = 0; j < r; j++) {
				cout << s[z];
			}
		}
		cout << "\n";
	}
	return 0;
}