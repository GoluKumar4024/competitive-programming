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


void solve(){

	int w,b;
	scanf("%d %d",&w,&b);
	double dp[w+1][b+1];

	int i,j;
	

	for(i=0;i<=b;i++){
		dp[0][i]=0.0;
	}
	for(i=0;i<=w;i++){
		dp[i][0]=1.0;
	}
	dp[0][0]=0;

	for(i=1;i<=w;i++){
		for(j=1;j<=b;j++){
					
				double prob_p_w=1.0*i/(i+j);
				double prob_p_b=1.0*j/(i+j);
				double prob_d_b=1.0*(j-1)/(i+j-1);
				double prob_w_e=(i+j-2>0)?1.0*(i)/(i+j-2):0;
				double prob_w_e_after=(j-2>=0)?dp[i-1][j-2]:0;
				double prob_b_e=(i+j-2>0)?1.0*(j-2)/(i+j-2):0;
				double prob_b_e_after=(j-3>=0)?dp[i][j-3]:0;

				dp[i][j]=prob_p_w+prob_p_b*prob_d_b*(prob_w_e*prob_w_e_after+prob_b_e*prob_b_e_after);
				
		}
	}

	//printf("%lf",dp[w][b]);
	coud(dp[w][b],10);
	
}


int main(){
 
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
#endif
 
	int t=1;
	//scanf("%d",&t);
	while(t--){
		solve();
	}
return 0;
}
