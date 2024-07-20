#include <iostream>
using namespace std;
int main() {
	int n;
	int a[100];
	cin >> n;
	while (n != -1) {
		int total = 0;
		int j = 0;
		int length = 0;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				a[j] = i;
				total += a[j];
				j++;
				length++;
			}
		}

		if (total == n) {
			cout << n << " = " << a[0];
			for (int i = 1; i<length ; i++) {
				cout << " + " << a[i];
			}
			cout << "\n";
		}
		else {
			cout << n << " is NOT perfect.\n";
		}

		cin >> n;
	}
}