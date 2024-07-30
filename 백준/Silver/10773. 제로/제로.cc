#include <iostream>
using namespace std;
int main() {
	int k, n, j = 0;
	int sum = 0;
	int arr[100000];
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> n;

		if (n == 0) sum -= arr[--j];
		
		else {
			arr[j] = n;
			sum += n;
			j++;

		}

	}

	cout << sum;
	return 0;
}