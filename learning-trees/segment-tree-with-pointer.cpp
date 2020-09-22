#include<bits/stdc++.h>
 
#define PI 3.1415926535897932384626
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define ini(a) memset(a,-1,sizeof(a))
#define mod (long long)(1e9+7)
 
#define chk(a) cout << endl << #a << " : " << a << endl
#define chk2(a,b) cout << endl << #a << " : " << a << "\t" << #b << " : " << b << endl
#define chk3(a,b,c) cout << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << endl
#define chk4(a,b,c,d) cout << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << "\t" << #d << " : " << d << endl
#define coud(a,d) cout << fixed << showpoint << setprecision(d) << a;

using namespace std;
 
typedef pair<int, int>	pi;
typedef pair<int,pi>    pii;
typedef pair<ll, ll>	pl;
typedef pair<ll,pl>     pll;

// i am using pointers to make a segment tree for learning persistent segment trees


struct node{
	int value;
	struct node * left,*right;
	node(): value(0),left(nullptr),right(nullptr){}
	node(int value):value(value),left(nullptr),right(nullptr){}
	node(struct node *l,struct node *r):sum(0),left(l),right(r){
		if(l){sum+=l->value;}
		if(r){sum+=r->value;}
	}
};
typedef struct node node;

node *build(int l,int r){
	if(l>r){return new node();}
	if(l==r){
		return new node(arr[l]);
	}
	int mid=(l+r)/2;
	node *left=build(l,mid);
	node *right=build(mid+1,r);
	return new node(left,right);
	
}

// normal update...
update(node *v,int l,int r,int idx,int val){
	
	if(l>r){
		
	}

	int mid=(l+r)/2;
	if(idx<=mid && idx>=l){
		node * left=update(v->left,l,mid,idx,val);
		v->value=v->right->value+left->value;
		return v;	
	}
	if(idx>mid && idx<=r){
		node * right=update(v->right,mid+1,r,idx,val);
		v->value=v->left->value+right->value;
		return v;
	}
}


void solve(){

	


	
}


nt main(){
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
#endif
 
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
return 0;
}
