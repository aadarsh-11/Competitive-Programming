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

        int x = 0;

        for (int i = n-1; i > 0; i--)
        {
        	if(a[i] <= a[i-1])
        	{
        		continue;
        	}
        	else
        	{
        		x = i;
        		break;
        	}
        }

        int y = 0;

        for (int i = x; i > 0; i--)
        {
        	if(a[i] >= a[i-1])
        	{
        		continue;
        	}
        	else
        	{
        		y = i;
        		break;
        	}
        }
        cout<<y<<"\n";
    }
    return 0;
}