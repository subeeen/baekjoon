#include <iostream>
using namespace std;
bool b(int i) {
	if (i < 2) return false;
	for (int j = 2; j * j <= i; j++) {
		if (i % j == 0) return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++) {
		if (b(i)) cout << i << "\n";
	}
	return 0;
}