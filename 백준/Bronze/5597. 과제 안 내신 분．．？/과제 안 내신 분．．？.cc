#include <iostream>
using namespace std;

int main() {
	int n;
	int arr[30] = { 0, };

	for (int i = 0; i < 28; i++) {
		cin >> n;
		arr[n - 1] = 1;
	}

	for (int i = 0; i < 30; i++) {
		if (arr[i] == 0) printf("%d\n", i+1);
	}
}