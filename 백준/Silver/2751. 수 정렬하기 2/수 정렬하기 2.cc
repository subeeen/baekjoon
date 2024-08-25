#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int temp;

	cin >> n;

	vector <int> result(n);

	for (int i = 0; i < n; i++) {
		cin >> result[i];
	}

	sort(result.begin(), result.end());

	for (int i = 0; i < n; i++) cout << result[i]<<"\n";

	return 0;
}