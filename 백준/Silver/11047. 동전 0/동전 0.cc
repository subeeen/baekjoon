#include <iostream>
using namespace std;
int main() {
	int n, k;
	int num = 0;
	int a[10];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		if (k / a[i] >= 1) {
			num += (k / a[i]);
			k = k % a[i];
		}
	}
	cout << num;
	return 0;
} 