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


//DP solution the time complexity is bigO(N^2)
int foo(int x)
{
	int sum=1;
	if(vis[x]==1)
		return dp[x];
	vis[x]=1;
	
	for(int j=0; j<n; j++)
	{
		if(a[j]>a[x] and a[j]-a[x]<=k)
			sum+=foo(j);
	}
	dp[x]+=sum;
	return sum;
}
int main()
{
	cin>>n>>k;
	
	f(i,0,n)
		cin>>a[i],vis[i]=0;
	int ans=0;
	//cout<<"hi";
	for(int i=0; i<n; i++)
	{
		ans+=foo(i);
	//	cout<<ans<<" ";
	}
	cout<<ans;

}


