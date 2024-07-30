#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << a + b - c << "\n";
	if (b >= 1 && b < 10) d = a * 10 + b - c;
	else if (b >= 10 && b < 100) d = a * 100 + b - c;
	else if (b >= 100 && b < 1000) d = a * 1000 + b - c;
	else if (b == 1000) d = a * 10000 + b - c;
	cout << d;
	return 0;
}