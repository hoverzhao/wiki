#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int INF = 1e9;
double ESP = 1e-9;

static int x = []() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	freopen("bidir_link.in", "r", stdin);
	freopen("bidir_link.out", "w", stdout);
	return 0;
}();
const int N=100010;
int value[N];
int l[N];
int r[N]; //三者用下标联系，对于每个节点也就是每个下标i 他有自己的value 和指向左边和右边的pointer
//left 和right 表示这个指针
int index; //表示当前可用的位置下标，类似new

void initialize(){
	// 0表示左端点，1表示右端点 用下标表示每个节点
	l[1]=0;
	r[0]=1;
	index=2; //0 and 1 are used
}

void add_to_right(int k,int x){ //第k个node的右边插入一个元素
	l[r[k]]=index;
	r[index]=r[k];
	value[index]=x;
	l[index]=k;
	r[k]=index;
	r[index];
	index++;
}

//如果要在k这个点的左边插入x，那么直接把k改成l【k】就可以了，
void remove(int k){
	//删除第k个点
	r[l[k]]=r[k];
	l[r[k]]=l[k];
}



int main() {
	int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	return 0;
}

