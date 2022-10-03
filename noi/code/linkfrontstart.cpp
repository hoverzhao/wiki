#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000 + 5;
int maxx[maxn], head[maxn];
int n, m, x, y, w, cnt;

struct Edge{
	int to, w, next;
}e[maxn];

void add(int u, int v, int w) {
	e[cnt].to = v;
	e[cnt].w = w;
	e[cnt].next = head[u];
	head[u] = cnt++; // e[cnt]边从0号开始计数
}

void printg() {
	for (int u = 1; u <= n; u++) {
		cout << u << ":   ";
		for (int i = head[u]; ~i; i = e[i].next) {
			int v = e[i].to, w = e[i].w;
			cout << "[" << v << " " << w << "]\t";
		}
		cout << endl;
	}
}
int main() {
	cin >> n >> m;
	memset(head, -1, sizeof(head));
	for (int i = 1; i <= m; i++) {
		cin >> x >> y >> w;
		add(x, y, w);
		add(y, x, w);
	}
	printg();
	return 0;
}
