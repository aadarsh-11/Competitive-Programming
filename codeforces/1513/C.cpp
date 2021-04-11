#include<bits/stdc++.h>
using namespace std;
#define fab(a,b,i) for(int i=a; i<b; i++)
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
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) x.begin(), x.end()
#define mod 1000000007
#define boost ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

ll add(ll x, ll y) {ll res = x + y; return (res >= mod ? res - mod : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + mod : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= mod ? res % mod : res);}
ll power(ll x, ll y) {ll res = 1; x %= mod; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, mod - 2);}
ll lcm(ll x, ll y) {ll res = (x * y) / __gcd(x, y); return res;}

ll nod1[200000] = {0};
ll nod0[200000] = {0};

ll nod(int x, int m)
{
  int x1 = x;
  int m1 = m;
  ll ans = 0;
  // if (nod1[x][m] > 0)
  // {
  //   return nod1[x][m];
  // }
  while (x<10 and m>0)
  {
    m--;
    x++;
  }
  if (m > 0)
  {
    if (nod1[m] > 0)
    {
      ans = (ans + nod1[m]) % mod;
    }
    else
    {
      nod1[m] = nod(1, m);
      ans = (ans + nod1[m]) % mod;
    }
    if (nod0[m] > 0)
    {
      ans = (ans + nod0[m]) % mod;
    }
    else
    {
      nod0[m] = nod(0, m);
      ans = (ans + nod0[m]) % mod;
    }
  }
  else if (m == 0 and x < 10)
  {
    ans = (ans + 1) % mod;
    // nod1[x1][m1] = ans;
  }
  else if (m == 0 and x == 10)
  {
    ans = (ans + 2) % mod;
    // nod1[x1][m1] = ans;
  }
  return ans;
}

void solve()
{
  ll n, m;
  cin >> n >> m;
  ll ans = 0 ;
  std::map<int, ll> map;
  // string s = to_string(n);
  while (n > 0)
  {
    int x = n % 10;
    n = n / 10;
    if (map[x] > 0)
      ans = (ans + map[x]) % mod;
    else
    {
      map[x] = nod(x, m);
      ans = (ans + map[x]) % mod;
    }
  }
  cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
  freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
#endif

  boost;

  int t;
  cin >> t;
  while (t--)
  {
    // for (int i = 0; i < 10; ++i)
    // {
    //   nod1[i] = 0;
    // }
    // nod
    solve();
  }
  cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
  return 0;
}