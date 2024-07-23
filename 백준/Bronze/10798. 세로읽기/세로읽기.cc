#include <iostream>
using namespace std;
int main() {
	char a[5][15] = { 0 };
	for (int i=0; i < 5; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < 15; j++) {
		for (int k = 0; k < 5; k++) {
			if (a[k][j] != NULL) cout << a[k][j];
		}
	}
	return 0;
}