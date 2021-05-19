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


void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '0')
        {
            cout << "YES\n0\n";
            return;
        }
        else if(s[i] == '8')
        {
            cout << "YES\n8\n";
            return;
        }
    }
    for (int i = 0; i < s.size(); ++i)
    {
        for (int j = i + 1; j < s.size(); ++j)
        {
            for (int k = j + 1; k < s.size(); ++k)
            {
                string tmp = "";
                tmp += s[i];
                tmp += s[j];
                tmp += s[k];
                ll x = stoll(tmp);
                // cout<<x<<endl;
                if (x % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << x << endl;
                    return;
                }
            }
            string tmp = "";
            tmp += s[i];
            tmp += s[j];
            ll x = stoll(tmp);
            // cout<<x<<endl;
            if (x % 8 == 0)
            {
                cout << "YES" << endl;
                cout << x << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/CODING/C++/Sublime Text/input.txt", "r", stdin);
    freopen("D:/CODING/C++/Sublime Text/output.txt", "w", stdout);
#endif

    boost;

    int t = 1;

    while (t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}