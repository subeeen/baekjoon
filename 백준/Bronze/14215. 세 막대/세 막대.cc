#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c) {
		while (a >= (b + c)) {
			a--;
		}
	}
	else if (b >= a && b >= c) {
		while (b >= (a + c)) {
			b--;
		}
	}
	else {
		while (c >= (a + b)) {
			c--;
		}
	}

	cout << a + b + c;
}