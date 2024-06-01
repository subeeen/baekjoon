#include<iostream>
using namespace std;
int main() {
	int a[26] = { 0 };
	int max = -1; // max : 알파벳 사용 개수의 최댓값
	char maxal; // 사용개수 max 인 알파벳
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A'; //소문자를 대문자로 변경

		if (++a[s[i] - 'A'] > max) {
			max = a[s[i] - 'A'];
			maxal = s[i];
		}
	}
	int check = 0;
	for (int i = 0; i < 26; i++) {
		if (max == a[i]) check++;
	}
	if (check == 1) cout << maxal;
	else cout << "?";
	return 0;
}