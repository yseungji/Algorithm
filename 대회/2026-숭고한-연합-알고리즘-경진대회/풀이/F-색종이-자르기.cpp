#include <bits/stdc++.h>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	int sum = 0;
	long long int ans = 0;
	vector<int> A;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		sum += c;
		A.push_back(c);
	}

	for (int i = 0; i < N; i++) {
		sum -= A[i];
		ans += 1LL * sum * A[i];
	}
	cout << ans;

}
