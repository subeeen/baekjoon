#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int result;
	int arr[10] = { 0 };
	cin >> a;
	cin >> b;
	cin >> c;
	result = a * b * c;
	while (result > 0) {
		arr[result % 10] += 1;
		result = result / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}
	return 0;
}