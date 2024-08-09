#include <iostream>
using namespace std;
int main() {
	int n;
	int ori;
	int neww=-1;
	int sum;
	int count=0;

	cin >> n;
	ori = n;

	while (ori != neww) {
		if (n < 10) { 
			sum = n;
			neww = n * 10 + sum;
			count++;
			n = neww;
		}
		else {
			sum = (n / 10 + n % 10);
			neww = (n % 10) * 10 + (sum % 10);
			n = neww;
			count++;
		}
	}
	cout << count;
	return 0;
}