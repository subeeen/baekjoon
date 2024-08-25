#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	vector <int> result;
	
	while (n > 0) {
		result.push_back(n % 10);
		n /= 10;
	}

	sort(result.begin(), result.end());
	for (int i = result.size()-1; i >=0; i--) {
		cout << result[i];
	}
	return 0;
}