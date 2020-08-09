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
        ll m;
        cin>>m;
        char a[n][m];
        ll cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin>>a[i][j];
                if(j==m-1)
                {
                    if(a[i][j] == 'R')
                    {
                        cnt++;
                    }
                }
                if(i == n-1)
                {
                    if(a[i][j] == 'D')
                    {
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}