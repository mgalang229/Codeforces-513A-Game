#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int n1, n2, k1, k2;
	cin >> n1 >> n2 >> k1 >> k2;
	if(n1 > n2) cout << "First";
	else cout << "Second";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
