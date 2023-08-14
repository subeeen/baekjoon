#include<stdio.h>
int main() {
	int a, b;
	do {
		scanf("%d %d", &a, &b);
		if (a > b && a % b == 0) printf("multiple\n");
		else if (a < b && b % a == 0) printf("factor\n");
		else if (a == 0 && b == 0) break;
		else printf("neither\n");
	} while(1);
}