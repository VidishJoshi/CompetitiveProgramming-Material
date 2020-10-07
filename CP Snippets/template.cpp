void dfs(int node , vector<int> gr[], int v[])
{
    v[node]=1;
    //cout<<"Yes";
    for(int i : gr[node])
    {
        //cout<<" :"<<gr[node][i];
        if(!v[i])
        {
            dfs(i, gr , v);
        }
    }
}

inline int two(int n)
{
    return 1 << n;
}
inline int test(int n, int b)
{
    return (n >> b) & 1;
}
inline void set_bit(int &n, int b)
{
    n |= two(b);
}
inline void unset_bit(int &n, int b)
{
    n &= ~two(b);
}
inline int last_bit(int n)
{
    return n & (-n);
}
inline int ones(int n)
{
    int res = 0;
    while (n && ++res)
        n -= n & (-n);
    return res;
}
ll gcd(ll a, ll b)
{
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}
ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
ll powermod(ll x,ll y) {
    if (y == 0)
        return 1;
    ll p = powermod(x, y/2) % mod;
    p = (p * p) % mod;
    return (y%2 == 0)? p : (x * p) % mod;
}
ll powermod2(ll x, ll y)
{
    ll res = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}
ll mulmod(ll a, ll b)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    }
    return res;
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if ((n % i == 0) || (n % (i + 2) == 0))
            return false;
    }
    return true;
}
long double dist(ll x1, ll y1, ll x2, ll y2)
{
    return (long double)sqrt((long double)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}
ll squaredist(ll x1, ll y1, ll x2, ll y2)
{
    return ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
ll nCr(ll n, ll r)
{
	int ans=1;
   	for (int i = 0; i < r; ++i)
   	{
   		ans*=(n-i);
   		ans/=(i+1);
   	}
   	return ans;
}
ll countDivisors(ll n)
{
    ll cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cnt++;
            else
                cnt = cnt + 2;
        }
    }
    return cnt;
}
ll modulo(ll a, ll b)
{
    ll r = a % b;
    return r < 0 ? r + b : r;
}
void fs(int &number) 
{ 
    bool negative = false; 
    register int c;   
    number = 0; 
    c = getchar(); 
    if (c=='-') 
    { 
        negative = true; 
        c = getchar(); 
    } 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
    if (negative) 
        number *= -1; 
} 

ll binarySearch(ll arr[], ll l, ll r, ll x) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2;

        if(r-l==2 && arr[l]!=x && arr[r]!=x)
        {
            return arr[l];
        } 
        if (arr[m] == x) 
            return m; 
        if (arr[m] < x) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    return -1;
    return arr[r];   //lower
    return arr[r+1]; //higher 
} 


int modInverse(int a, int m) 
{ 
    a = a%m; 
    for (int x=1; x<m; x++) 
       if ((a*x) % m == 1) 
          return x; 
}

#include<bits/stdc++.h>
#include<algorithm>
#include<functional>
#include<iostream>
//#include<boost/multiprecision/cpp_int.hpp>
#define f(n) for(long long int i=0;i<n;i++)
#define g(n) for(long long int j=0;j<n;j++)
#define ff(a,n) for(long long int i=a;i<n;i++)
#define gg(a,n) for(long long int j=a;j<n;j++)
#define t(a) long long int a;cin>>a
#define test(te) t(te); while(te--)
#define ctest t(te);for(lli t=0;t<tt;t++)
#define all(a) a.begin(),a.end()
#define ent "\n"
#define pri(a,n) f(n){cout<<a[i]<<" ";}cout<<ent
#define cas(i) "Case #"<<i+1<<": "
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mod 1000000007  
#define ll long long 
#define lli long long int
#define op std::ios_base::sync_with_stdio(false);cin.tie(NULL)
//using namespace boost::multiprecision;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
using namespace std;

int main(int argc, char const *argv[])
{
    op;
    
    return 0;
}
