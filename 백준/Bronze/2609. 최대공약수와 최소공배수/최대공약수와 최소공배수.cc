#include<iostream>
using namespace std;
int main() {
	int a, b;
	int max, min;
	cin >> a >> b;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= b; j++) {
			if (a % i == 0 && b % j == 0 && i == j) max = i;
		}
	}
	cout << max << "\n";

	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= a; j++) {
			if ((a * i) == ( b * j)) {
				min = a * i;
				cout << min;
				return 0;
			}
		}
	}
	return 0;
	}