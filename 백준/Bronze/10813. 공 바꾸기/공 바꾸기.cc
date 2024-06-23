#include <iostream>
using namespace std;

int main() {
	int n, m;
	int a, b;
	int temp;
	int num[100] = { 0, };
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		num[i] = i + 1;
	}
		
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		temp = num[a - 1];
		num[a - 1] = num[b - 1];
		num[b - 1] = temp;
	}

	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
}