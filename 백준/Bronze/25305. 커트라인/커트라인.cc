#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	int num=0;
	vector <int> result;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin>> num;
		result.push_back(num);
	}
	sort(result.begin(), result.end());
	cout<<result[n-k];
}