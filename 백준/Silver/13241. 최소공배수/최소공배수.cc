#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int temp;
	while(1){
		int temp = b;
		b = a % b;
		a = temp;
		if (b == 0) break;
	}
	return a;
}
int main() {
	//최소공배수 = 두 수의 곱 / 최대공약수
	long long int a;
	long long int b;
	long long int max;
	cin >> a >> b;
	if (a < b) {
		a = (int)a;
		max = b;
	}
	else {
		b = (int)b;
		max = a;
	}

	max = (a * b) / gcd(a, b);
	cout << max;
	return 0;

}