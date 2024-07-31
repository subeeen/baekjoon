#include<iostream>
using namespace std;
int fac(int n) {
	int result=1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}
int main() {
	int n, k;
	int result;
	cin >> n >> k;
	result = fac(n) / fac(k) / fac(n - k);
	cout << result;
	return 0;
}