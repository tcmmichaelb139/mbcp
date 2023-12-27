#include "bits/stdc++.h"
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long a, b;
	cin >> a >> b;
	long long sol = 0;
	for (int i = 1; i < b; i++)
		sol += a;
	cout << sol << '\n';
}
