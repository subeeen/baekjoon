#include<stdio.h>
int main() {
	int n, m, i, j;
	int sum = 0;
	int a = 0;
	int count;
	int arr[10000];
	scanf("%d", &m);
	scanf("%d", &n);

	for (i = m; i <= n; i++) {
		count = 0;
		for (j = 1; j <= i; j++) {
			
			if (i % j == 0) count++;
		}
		if (count == 2)
		{
			arr[a] = i;
			a++;
		}
	}

	for (i = 0; i < a; i++) {
		sum += arr[i];
	}
	if (sum != 0)
	{
		printf("%d\n", sum);
		printf("%d", arr[0]);
	}
	else printf("-1");
	}
