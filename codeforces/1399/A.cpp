#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long int
#define pb push_back
#define f first
#define s second
#define c1 1000000007


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int flag = 0;
        for (int i = 0; i < n-1; ++i)
        {
            if(abs(a[i]-a[i+1])<=1)
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}