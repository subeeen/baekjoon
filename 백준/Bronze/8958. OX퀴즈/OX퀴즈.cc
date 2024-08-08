#include <iostream>
using namespace std;
int sum(int n) {
	int result=0;
	for (int i = 1; i <= n; i++) {
		result += i;
	}
	return result;
}

int main() {
	string s;
	int total=0;
	int score = 0;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		total = 0;
		score = 0;
		for (int i = 0; i < s.length(); i++) {

			if (s[i] == 'O') total += 1;

			else if (s[i] == 'X') {
				score += sum(total);
				total = 0;
			}
		}
		if (total != 0) score += sum(total);
		cout << score<<"\n";
	}
	return 0;
}