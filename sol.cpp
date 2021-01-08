#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for (char c : s) {
		if (c == '-') {
			// if c == '-' then decrement cnt or reset it to 0
			cnt = max(0, cnt - 1);
		} else {
			// otherwise, increase cnt
			cnt++;
		}
	}
	// this will produce the number of stones left after n operations
	cout << cnt << '\n';
	return 0;
}
