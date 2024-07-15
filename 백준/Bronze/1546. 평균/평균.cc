#include <iostream>
using namespace std;
int main() {
	int n;
	float score[1000];
	float max = 0;
	float total=0;
	cin >> n;
	for (int i=0; i < n; i++) {
		cin >> score[i];
		if (max < score[i]) max = score[i];
	}
	for (int i = 0; i < n; i++) {
		score[i] = score[i] / max * 100;
		total += score[i];
	}
	cout << total / n;
	return 0;
}