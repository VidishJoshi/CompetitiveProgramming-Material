#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod (ll)1000000007
#define fast std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define input int t;cin>>t;while(t--)
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define f(i, a, b) for (int i = (a); i < (b); i++)
#define fr(i, a, b) for (int i = (a); i >= (b); i--)
#define mp make_pair
#define pb push_back
#define fs first
#define sc second
#define all(x) x.begin(), x.end()
#define cins(s) string s; cin>>s;
#define cini(i) int i; cin>>i;
#define cinll(l) ll l; cin>>l;
#define cind(d) double d; cin>>d;
#define PI 3.1415926535897932384626433
int i,j,k;
int n,k;
int a[10000];
int vis[10000];
int dp[10000];
vector<int> v;


int sum_of_range(int l,int r)
{
	if(r==(n-1))
		return dp[l];
	else
		return dp[l]-dp[r+1];
}
int findy(int x)
{

	auto it = upper_bound(v.begin(),v.end(),x+k);
	if(it==v.begin())
		return -1;
	it--;
	if(*it<x)
		return -1;
	
	return it-v.begin();
}
int main()
{
	cin>>n>>k;
	
	f(i,0,n)
		cin>>a[i],vis[i]=0,v.pb(a[i]);
	int ans=0;
	sort(a,a+n);
	sort(all(v));
	dp[n-1]=1;
	for(int i=n-2; i>=0; i--)
	{
		int sum=0;
		int y=findy(v[i]);
		if(y!=-1)
			sum=sum_of_range(i+1,y);
		dp[i]=1+sum;
		dp[i]+=dp[i+1];
		
	//	cout<<ans<<" ";
	}
	cout<<dp[0];

}

