#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int INF = 1e9;
double ESP = 1e-9;

static int x = []() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	freopen("bsearch_poj3258_cow_jump_rocks.in", "r", stdin);
	freopen("bsearch_poj3258_cow_jump_rocks.out", "w", stdout);
	return 0;
}();

// L[0, 1e9]
// N 50000
// M   <= N

int L, N, M;
int a[50005];
int main() {

	cin >> L >> N >> M;
	int i = 0;
	while (cin >> a[++i]);
	a[i] = L;
	sort(a, a+N+2);
	return 0;
}

