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
int main()
{
	input
	{	
		cini(n);
		ll a[n];
		ll dp[n];
		f(i,0,n)
			cin>>a[i];
		dp[0]=1;
		ll sum=0;
		for(i=1; i<n; i++)
		{
			dp[i]=1;
			if(a[i]>=a[i-1])
				dp[i]+=dp[i-1];
			sum+=dp[i];
		}
		cout<<sum<<'\n';
	}
	

}

