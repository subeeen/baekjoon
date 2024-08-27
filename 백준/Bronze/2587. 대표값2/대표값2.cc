#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum=0;
	int num;
	vector <int> result;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		result.push_back(num);
		sum += result[i];
	}
	sort(result.begin(), result.end());
	cout << sum / 5 << "\n" << result[2];
}