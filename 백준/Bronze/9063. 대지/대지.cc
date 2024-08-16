#include<iostream>
using namespace std;
int main() {
	int n;
	signed int x, y;
	signed int min1, min2, max1, max2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		
		if(i == 0) {
			min1 = max1 = x;
			min2 = max2 = y;
		}
		else {
			if (x < min1) min1 = x;
			else if (x > max1) max1 = x;

			if (y < min2) min2 = y;
			else if (y > max2) max2 = y;
		}
	}
	cout << ((max1 - min1) * (max2 - min2));
	return 0;
}