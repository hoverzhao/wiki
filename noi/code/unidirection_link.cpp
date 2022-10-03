#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int INF = 1e9;
double ESP = 1e-9;

static int x = []() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	freopen("link.in", "r", stdin);
	freopen("link.out", "w", stdout);
	return 0;
}();
//用连个数组分别储存一个节点的 value 和 next指针。 通过两个数组的下标进行关联， 空指针用-1代替。
const int N=10010;
int e[N],ne[N]; //e- value  ne- next
/*
e[0] =1  ne[0]=1 表示这个节点的value是1，
节点指向下一个节点的下标是1，
则下一个节点的value=e[ne[0]]  
下一个节点的next是 ne[ne[0]]
*/
int head; 	//表示头结点指向的下一个节点的位置下标
int idx; // 当前可用的最新的点的下标。   代表空间 
 
void initialize(){
	head=-1;
	idx=0;
}

void add_to_head(int x){
// idx表示现在可以new出来的一个空间。
	e[idx]=x; 
	ne[idx]=head;
	head=idx;
	idx++;
}

void add(int x,int k){
	//把x这个值，用一个节点储存然后插入到k这个下标的后面
	e[idx]=x;
	ne[idx]=ne[k];
	ne[k]=idx;
	idx++; 
} 

void remove(int k){
	//将下标是k的点后面的那个节点删除
	 ne[k]=ne[ne[k]];
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	return 0;
}

