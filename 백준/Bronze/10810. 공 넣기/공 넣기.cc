#include <iostream>
using namespace std;

int main() {
	int n, m;
	int a, b, c;
	int num[100] = { 0, };
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		for (int j = a - 1; j < b; j++) {
			num[j] = c;
		}
	}

	for (int i = 0; i <n; i++) {
		if (num[i] != 0) printf("%d ",num[i]);
		else printf("0 ");
	}

	return 0;
}