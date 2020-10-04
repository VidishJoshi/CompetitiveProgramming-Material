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
//brute force solution
//int main()
//{
//	cini(n);
//	int a[n];
//	f(i,0,n)
//		cin>>a[i];
//	int sum=0,ans=0;
//	for(i=0; i<n; i++)
//	{
//		sum=0;
//		for(j=i; j<n; j++)
//		{
//			sum+=a[j];
//			ans=max(ans,sum);
//		}
//	}
//	cout<<ans;
//}


//optimised solution
//int main()
//{
//	cini(n);
//	int a[n];
//	f(i,0,n)
//		cin>>a[i];
//	int sum=0,ans=0;
//	for(i=0; i<n; i++)
//	{
//		sum+=a[i];
//		if(sum>0)
//			ans=max(ans,sum);
//		else
//			sum=0;
//		
//	}
//	cout<<ans;
//}


//optimised solution using dp
int main()
{
	cini(n);
	int a[n];
	f(i,0,n)
		cin>>a[i];
	int dp[n];
	dp[0]=max(0,a[0]);
	for(i=1; i<n; i++)
	{
		dp[i]=max(0,a[i]+dp[i-1]);
		
	}
	cout<<dp[n-1];
}
