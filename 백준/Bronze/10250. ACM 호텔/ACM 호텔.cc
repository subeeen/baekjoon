#include <iostream>
using namespace std;
int main() {
	int t;
	int h, w, n;
	int num;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		if (n % h == 0) {
			num = 100 * h + (n / h);
		}
		else
		{ num = 100 * (n % h) + (n / h + 1); }

		cout << num<<"\n";
	}
	return 0;
} 