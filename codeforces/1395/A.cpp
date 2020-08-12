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
        ll r, g ,b ,w;
        cin>>r>>g>>b>>w;
        if(r%2 + g%2 + b%2 + w%2 == 0 || r%2 + g%2 + b%2 + w%2 == 4 || r%2 + g%2 + b%2 + w%2 == 1)
        {
            cout<<"YES\n";
        }
        else if(r%2 + g%2 + b%2 + w%2 == 2)
        {
            cout<<"NO\n";
        }
        else if((r>0 && g>0 && b>0) && w%2 == 1 && (r%2 + g%2 + b%2 == 2))
        {
            cout<<"YES\n";
        }
        else if(r%2 + g%2 + b%2 == 3)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}