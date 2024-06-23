#include <iostream>
using namespace std;

int main() {
	int a[10] = { 0, };
	int b[10] = { 0, };
	int c[100] = { 0, };
	int num=0;

	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		b[i] = a[i] % 42;
	}

	//b : 각각 42로 나눈 나머지들이 들어간 배열
	//b : 39, 40, 41, 0, 1, 2, 40, 41, 0, 1
	//c :  0,  0,  0, 0, 0, 0,  0,  0, 0, 0

	for (int i = 0; i < 10; i++) {
		c[b[i]]++;
	}
	
	for (int i = 0; i < 100; i++) {
		if (c[i]!=0) num++;
	}

	printf("%d", num);
}