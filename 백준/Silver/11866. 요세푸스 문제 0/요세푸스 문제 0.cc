#include<iostream>
#include<queue>
#include <vector>
using namespace std;
int main() {
	queue <int> q;
	vector <int> result;
	int n;
	int k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while(q.size()!=0){
		for (int i = 1; i <k; i++) {
			q.push(q.front());
			q.pop();
		}

		result.push_back(q.front());
		q.pop();
	}

	cout << "<";
	for (size_t i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i != result.size()-1) cout << ", ";
	}
	cout << ">";
	return 0;
}