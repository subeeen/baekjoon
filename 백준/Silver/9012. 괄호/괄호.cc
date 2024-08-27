#include<iostream>
#include<stack>
using namespace std;

bool VPS(string str) {
	stack<char> s;
	for (char ch : str) {
		//ch는 str의 문자열 차례로 가리킴
		if (ch == '(') s.push(ch); //'('는 스택에 넣음
		else if (ch == ')') { 
			if (s.empty()) return false;
			// 스택이 비어있는데 ')'가 나오면 VPS가 아님
			else s.pop(); // '('와 짝을 맞춘 후 '('을 스택에서 제거
		}
	}
	// 스택이 비어있다면 모든 괄호가 짝을 맞춘 것
	return s.empty();
}

int main() {
	
	int t;
	string str;
	cin >> t;
	while (t--) {
		cin >> str;
		if (VPS(str)==true) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}