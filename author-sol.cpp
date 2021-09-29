#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// check if 'n' is divisible by 4
		if (n % 4 != 0) {
			cout << "NO" << '\n';
			continue;
		}
		// if yes, then divide the sequence into four (4) equal parts
		// and combine part 1 and part4 and part 2 and part3
		cout << "YES" << '\n';
		int q1 = n / 4;
		int q2 = 2 * n / 4;
		int q3 = 3 * n / 4;
		int q4 = n;
		for (int i = 1; i <= q1; i++) {
			cout << i << " ";
		}
		for (int i = q3 + 1; i <= q4; i++) {
			cout << i << " ";
		}
		cout << '\n';
		for (int i = q1 + 1; i <= q3; i++) {
			cout << i << " ";
		}
		cout << '\n';
	}
	return 0;
}
