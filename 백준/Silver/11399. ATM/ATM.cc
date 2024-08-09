#include <iostream>
using namespace std;
int main() {
	int n;
	int a[1000];
	int temp;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//버블정렬
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	//총합
	for (int i = 0; i < n; i++) {
		sum += (a[i] * (n - i));
	}
	cout << sum;
	return 0;
}