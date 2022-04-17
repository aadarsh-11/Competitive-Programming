#include<bits/stdc++.h>
using namespace std;

#define fab(a,b,i) for(int i=a; i<b; i++)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define eb emplace_back
#define db double
#define mp make_pair
#define mt make_tuple
#define endl "\n"
#define f first
#define se second
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define deb(x) cout << #x << "=" << x << endl
#define cdeb(x,y) cout << x << " " << y << endl
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl
#define boost ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define mod 1000000007

ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll lcm(ll x, ll y) {ll res = (x * y) / __gcd(x, y); return res;}

bool isPerfectSquare(ll x);
bool isPowerOfTwo(ll n);
bool is_prime(ll n);
int countSetBits(ll n);
int nod(ll n);
ll fact(ll a);

void solve()
{
	ll ans = LLONG_MAX, cnt = 0, sum = 0, temp = 0, t1 = 0, t2 = 0;
	ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	bool flag = 0, flag1 = 0, flag2 = 0;
	int n = 0, m = 0;

	//-----------------------------------------------------//

	ll a, b;
	cin >> n >> a >> b;

	vl arr(n);
	vl pre(n), post(n);

	fo(i, n)
	{
		cin >> arr[i];
		pre[i] = arr[i] * b;
		// if (i > 0) pre[i] += pre[i - 1];
	}

	for (int i = n - 1 ; i >= 0; i--)
	{
		if (i < n - 1)
		{
			post[i] = post[i + 1] + (n - i - 1) * (arr[i + 1] - arr[i]) * b;

		}
		ans = min(ans, pre[i] + arr[i] * a + post[i]);
		// deb2(i, ans);
	}
	ans = min(ans, arr[0] * n * b + post[0]);
	cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
	freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
#endif

	boost;

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
	return 0;
}

bool isPowerOfTwo(ll n)
{
	if (n == 0)
		return 0;
	while (n != 1)
	{
		if (n % 2 != 0)
			return 0;
		n = n / 2;
	}
	return 1;
}

bool isPerfectSquare(ll x)
{
	if (x >= 0)
	{
		ll sr = sqrt(x);
		return (sr * sr == x);
	}
	return false;
}

bool is_prime(ll n)
{
	if (n == 1) return false;

	ll i = 2;
	while (i * i <= n)
	{
		if (n % i == 0) return false;
		i += 1;
	}
	return true;
}

ll fact(ll a)
{
	ll i = 1;
	ll ans = 1;
	while (i <= a)
	{
		ans = mul(ans, i);
		i++;
	}
	return ans;
}

int countSetBits(ll n)
{
	if (n == 0) return 0;
	else
	{
		return (n & 1) + countSetBits(n >> 1);
	}
}

int nod(ll n)
{
	if (n == 0) return 1;
	n = abs(n);
	int ans = 0;
	while (n > 0)
	{
		n = n / 10;
		ans++;
	}
	return ans;
}
