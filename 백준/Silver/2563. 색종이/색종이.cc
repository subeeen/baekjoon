#include <iostream>
using namespace std;
int main() {
	int n;
	int a, b;
	char arr[100][100] = { 0 };
	int sum=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		for (int j = a; j < a+10; j++) {
			for (int z = b; z < b + 10; z++) {
				if (arr[j][z] == 1) continue;
				arr[j][z] = 1;
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}