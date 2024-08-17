#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int a1, a2, b1, b2;
	int c1, c2;
	cin >> a1 >> a2;
	cin >> b1 >> b2;
	c2 = a2 * b2;
	c1 = a1 * b2 + b1 * a2;
	int g = gcd(c1, c2);
	c1 /= g;
	c2 /= g;
	cout << c1 << " " << c2;
	return 0;
}
