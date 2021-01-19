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
ll lcm(ll x, ll y) {ll res=(x*y)/__gcd(x,y); return res;}


bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
   
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

void solve()
{
    int d;
    cin>>d;
    int a,b,c,e;
    a = 1;
    b = a+d;
    while(1)
    {
        if(isPrime(b))
            break;
        b++;
    }
    c = b+d;
    while(c<b*b)
    {
        if(isPrime(c))
            break;
        c++;
    }
    if(lcm(b,c) - d < d)
    {
        e = c+d;
        while(e< c*c)
        {
            if (isPrime(e))
            {
                break;  
            }
            e++;
        }
    }
    e = 1;
    cout<<lcm(lcm(b,c),e)<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
    freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
    #endif

    boost;

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}