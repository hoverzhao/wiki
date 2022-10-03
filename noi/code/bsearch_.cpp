#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int INF = 1e9;
double ESP = 1e-9;

static int x = []() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	freopen("bsearch_.in", "r", stdin);
	freopen("bsearch_.out", "w", stdout);
	return 0;
}();

#define sz(x) (int)(x).size()

int binary_search(vector<int> &a, int t) {
	int l = 0, r = sz(a) - 1;
	while (l <= r) {
		int m = l + ((r - l) >> 1);
		if (a[m] < t)
			l = m + 1;
		else if (a[m] > t)
			r = m - 1;
		else
			return m;
	}
	return -1;
}

int left_bound(vector<int> &a, int t) {
	int l = 0, r = sz(a) - 1;
	while (l <= r) {
		int m = l + ((r - l) >> 1);
		if (a[m] < t)
			l = m + 1;
		else
			r = m - 1;
	}
	if (l == sz(a)) return -1;
	return a[l] == t ? l : -1;
}

int right_bound(vector<int> &a, int t) {
	int l = 0, r = sz(a) - 1;
	while (l <= r) {
		int m = l + ((r - l) >> 1);
		if (a[m] <= t)
			l = m + 1;
		else
			r = m - 1;
	}
	if (r < 0) return -1;
	return a[r] == t ? r : -1;
}
		
int binary_search2(vector<int> &a, int t) {
	int l = 0, r = sz(a);
	while (l < r) {
		int mid = l + ((r - l) >> 1);
		if (a[mid] < t) 
			l = mid + 1;
		else if (a[mid] > t)
			r = mid;
		else 
			return mid;
	}
	return -1;
}

int left_bound2(vector<int> &a, int t) {
	int l = 0, r = sz(a);
	while (l < r) {
		int m = l + ((r - l) >> 1);
		if (a[m] < t)
			l = m + 1;
		else
			r = m;
	}
	if (l == sz(a)) return -1;
	return a[l] == t ? l : -1;
}

int right_bound2(vector<int> &a, int t) {
	int l = 0, r = sz(a);
	while (l < r) {
		int m = l + ((r - l) >> 1);
		if (a[m] <= t)
			l = m + 1;
		else
			r = m;
	}
	if (r == 0) return -1;
	return a[r - 1] == t ? r - 1 : -1;
	
}

int main() {
	int n, i = 0;
	cin >> n;
	vector<int> a(n, 0);
	while (n--) cin >> a[i++];
	sort(a.begin(), a.end());
	for (auto v : a) cout << v << " ";
	cout << endl;
	cout << "left_bound  " << left_bound(a, 2) << left_bound(a, 2) << endl;
	cout << "right_bound  " << right_bound(a, 2) << right_bound(a, 2) << endl;
	cout << "lower_bound  " << lower_bound(a.begin(), a.end(), 2) - a.begin() << endl;
	cout << "upper_bound  " << upper_bound(a.begin(), a.end(), 2) - a.begin() << endl; 
	return 0;
}

