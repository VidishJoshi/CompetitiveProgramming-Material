#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mp(x,y) make_pair(x,y)
const int mod=1e9+7;
const int nax=8005;
void solve(){
    int n,k;
    cin>>n>>k;
    int f[nax]={0};
    for(int i=0;i<n;i++){
        int x; cin>>x;
        f[x]++;
    }
    vector<int> v;
    for(int i=0;i<nax;i++){
        if(f[i]!=0) v.push_back(f[i]);
    }
    n=v.size();
    ll pre1[nax]={0};
    pre1[0]=1;
    pre1[1]=v[0];
    ll pre2[nax]={0};
    ll ans=0;
    for(int i=1;i<n;i++){
        pre2[0]=1;
        for(int j=1;j<=n;j++){
            pre2[j]=(pre1[j]+pre1[j-1]*v[i])% mod;
        }
        for(int j=0;j<=n;j++){
            pre1[j]=pre2[j];
        }
    }
    for(int i=0;i<=min(k,nax-1);i++){
        ans+=pre1[i];
        ans%=mod;
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc; 
    tc=1;
    while(tc--){
        solve();
    }
    return 0;
}
