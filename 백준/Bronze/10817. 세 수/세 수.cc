#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> result(3);
	for (int i = 0; i < 3; i++) {
		cin >> result[i];
	}
	sort(result.begin(), result.end());
	cout << result[1];
	return 0;
}