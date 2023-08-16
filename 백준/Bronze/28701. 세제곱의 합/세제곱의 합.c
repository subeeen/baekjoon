#include<stdio.h>
int main() {
	int n,i;
	int sum = 0;
	int tri = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	
	for (i = 1; i <= n; i++) {
		tri += (i * i * i);
	}

	printf("%d\n", sum);
	printf("%d\n", sum * sum);
	printf("%d", tri);
	}
