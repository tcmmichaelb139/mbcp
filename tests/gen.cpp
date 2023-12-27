#include "bits/stdc++.h"
using namespace std;

long long rand(long long a, long long b) {
	return a + rand() % (b - a + 1);
}

int main(int argc, char *argv[]) {
	srand(atoi(argv[1]));

	cout << rand(0, 100) << ' ' << rand(0, 1e9) << '\n';
}
