#include <iostream>
using namespace std;
// 유클리드 호제법 이용하여 최대공약수 구하기
int gcd(int a, int b) {
	int r = a % b;
	if (r == 0) return b;
	else return gcd(b, r);
}

int main() {
	int t;
	int lcd;
	int a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		lcd = (a * b) / (gcd(a, b));
		//최소공배수=(a*b)/최대공약수
		cout << lcd << "\n";

	}
	return 0;
}