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
		// if 'n' is odd then, output NO
		if (n & 1) {
			cout << "NO" << '\n';
			continue;
		}
		// view the image in this repository for better understanding
		// create a sequence from 1 to 'n'
		vector<int> complete(n);
		iota(complete.begin(), complete.end(), 1);
		vector<int> a;
		vector<int> b;
		// separate the numbers from 1 to 'n' in this fashion:
		// A = {a[0], a[n - 1], a[2], a[n - 3], ...}
		// B = {a[1], a[n - 2], a[3], a[n - 4], ...}
		for (int i = 0; i < (int) complete.size() / 2; i++) {
			if ((i + 1) & 1) {
				a.push_back(complete[i]);
				a.push_back(complete[n - 1 - i]);
			} else {
				b.push_back(complete[i]);
				b.push_back(complete[n - 1 - i]);
			}
		}
		// in order to avoid having the same prefix sum:
		// sort sequence A in non-decreasing order and sort sequence B in non-increasing order
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		long long sum1 = 0;
		long long sum2 = 0;
		// calculate both the sums of sequence A and B and check if they're the same
		for (int i = 0; i < (int) a.size(); i++) {
			sum1 += a[i];
		}
		for (int i = 0; i < (int) b.size(); i++) {
			sum2 += b[i];
		}
		if (sum1 != sum2) {
			cout << "NO" << '\n';
			continue;
		}
		// if yes, then follow the output format in the problem statement
		cout << "YES" << '\n';
		for (int i = 0; i < (int) a.size(); i++) {
			cout << a[i] << " ";
		}
		cout << '\n';
		for (int i = 0; i < (int) b.size(); i++) {
			cout << b[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
