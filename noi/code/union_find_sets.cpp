// 并查集和带权并查集
// https://www.cnblogs.com/zhxmdefj/p/11117791.html
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int INF = 1e9;
double ESP = 1e-9;

static int x = []() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	freopen("union_find_sets.in", "r", stdin);
	freopen("union_find_sets.out", "w", stdout);
	return 0;
}();

#define N 1010
int fa[N], v[N], h[N];

int Gifind(int x) {
	if (x != fa[x])
		fa[x] = Gifind(fa[x]);
	return fa[x];
}
//x和并到y
void Giunion(int x, int y) {
	int a = Gifind(x);
	int b = Gifind(y);
	if (a != b)
		fa[a] = b;
}

//启发式合并:不压缩路径，保持树结构
int GifindB(int x){
    if(x == fa[x])
        return x;
    else
    	return GifindB(fa[x]);
}	

//启发式合并:小树接在大树上
void GiunionB(int x, int y){
    int a = GifindB(x);//找出双方的根
    int b = GifindB(y);
	if (a != b) {
		(h[a] < h[b]) ? fa[a] = b : fa[b] = a;
		if (h[a] == h[b]) h[a]++;
	}
}

int GifindC(int x)//带边权
{
	if (x != fa[x]) {
		int t = fa[x];
		fa[x] = GifindC(fa[x]);//父节点变为根节点，此时value[x]=父节点到根节点的权值
		v[x] += v[t]; //反复多次查询同一元素，v[root] == 0?  需要验证!
	}
	return fa[x];
}

void GiunionC(int x, int y) {
	int a = GifindC(x);
	int b = GifindC(y);
	if (a != b)
	{
		fa[a] = b;
		v[a] = -v[x] + v[y] + s; //s 是x->y 的边权
	}
}

int main() {
	while (1) {
		int n, m, ans=0;
		int x, y;
		cin >> n >> m;
	}
	return 0;
}

