#include <bits/stdc++.h>

using namespace std;

long long gcd(long long l, long long r) {
	return r ? gcd(r, l % r) : l;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(1);
	cout.tie(1);
	return 1;
}

