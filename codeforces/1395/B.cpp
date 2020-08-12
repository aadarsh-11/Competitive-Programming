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

    int t = 1;
    // cin>>t;
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        ll i,j;
        i = x-1;
        j = y-1;
        ll a[n][m] = {0};
        a[i][j] = 1;
        cout<<i+1<<" "<<j+1<<"\n";
        i = 0;
        a[i][j] = 1;
        cout<<i+1<<" "<<j+1<<"\n";
        j = 0;
        a[i][j] = 1;
        cout<<i+1<<" "<<j+1<<"\n";
        int last = 0;
        for (int i = 0; i < n; ++i)
        {
            if(last == 0)
            {
                for (int j = 0; j < m; ++j)
                {
                    if(a[i][j] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        a[i][j] = 1;
                        cout<<i+1<<" "<<j+1<<"\n";
                    }
                }
                last = 1;
            }
            else
            {
                for (int j = m-1; j >=0 ; j--)
                {
                    if(a[i][j] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        a[i][j] = 1;
                        cout<<i+1<<" "<<j+1<<"\n";
                    }
                }
                last = 0;
            }
        }
    }
    return 0;
}