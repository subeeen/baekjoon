#include <iostream>
using namespace std;
int main() {
	string s;
	int a;
	int n = 0;
	int total;
	cin >> s;
	total = s.length();
	for (int i = 0; i < s.length(); i++) {
		a = int(s[i]) - 'A';
		if (a >= 0 && a <= 2) n = 2;
		else if (a >= 3 && a <= 5) n = 3;
		else if (a >= 6 && a <= 8)n = 4;
		else if (a >= 9 && a <= 11)n = 5;
		else if (a >= 12 && a <= 14)n = 6;
		else if (a >= 15 && a <= 18) n = 7;
		else if (a >= 19 && a <= 21) n = 8;
		else  n = 9;
		total += n;
	}
	cout << total;
	return 0;
}