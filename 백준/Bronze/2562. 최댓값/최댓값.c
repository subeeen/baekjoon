#include<stdio.h>
int main() {
	int i, count;
	int max = 0;
	int arr[9];
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
			count = i + 1;
		}
	}
	printf("%d\n", max);
	printf("%d", count);
}