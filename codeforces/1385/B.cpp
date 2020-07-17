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
        ll a[2*n];
        for (int i = 0; i < 2*n; ++i)
        {
        	cin>>a[i];
        }
        std::vector<ll> ans;
        for (int i = 0; i < 2*n; ++i)
        {
        	int flag = 0;
        	for (std::vector<ll>::iterator j = ans.begin(); j != ans.end(); ++j)
        	{
        		if(a[i]==*j)
        		{
        			flag = 1;
        			break;
        		}
        	}
        	if(flag)
        	{
        		continue;
        	}
        	else
        	{
        		ans.pb(a[i]);
        	}
        }
        for (std::vector<ll>::iterator i = ans.begin(); i != ans.end(); ++i)
        {
        	cout<<*i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}