#include <iostream>
using namespace std;
int main() {
	int n, m, a, b, temp;
	int bas[100];
	cin >> n >> m;

	for (int i = 0; i <n ; i++) {
		bas[i] = i + 1;
	}

	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		for (; a<=b; a++,b--) {
			//a부터 b 까지의 바구니 순서 역순으로
			temp = bas[a-1];
			bas[a-1] = bas[b-1];
			bas[b-1] = temp;

		}
	}

	for (int i = 0; i <n; i++) {
		cout << bas[i]<< " ";
	}
	return 0;
}