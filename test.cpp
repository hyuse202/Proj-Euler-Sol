#include <bits/stdc++.h>
using namespace std;
#define int long long
int segTree[400010], M[100010], a[100010], n, ans;

int query(int i, int j, int p=1, int l=0, int r=n)
{
	if(i>j)return 0;
	if(l>=i and r<=j)return segTree[p];
	int mid = (l+r)/2;
	int left = query(i, min(j, mid), p*2, l, mid);
	int right = query(max(i, mid+1), j, p*2+1, mid+1, r);
	return left+right;
}

void update(int x, int val, int p=1, int l=0, int r=n)
{
	if(l==r) { segTree[p]+=val; return; }
	int mid = (l+r)/2;
	if(x<=mid) update(x, val, p*2, l, mid);
	else update(x, val, p*2+1, mid+1, r);
	segTree[p] = segTree[p*2]+segTree[p*2+1];
}

int32_t main()
{
	ifstream cin("haircut.in");
	ofstream cout("haircut.out");
	ios_base::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		update(a[i], 1);
	}
	for(int i = n-1; i>=0; i--)
		M[a[i]]+=query(a[i]+1,n),  update(a[i], -1);
	for(int i = 0; i < n; ans+=M[i], i++)
		cout << ans << "\n";
}
