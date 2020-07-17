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
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]==a[1])
        {
        	if(a[0]==a[1])
        	{
        		cout<<"YES\n";
        		cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<"\n";
        	}
        	else
        	{
        		cout<<"YES\n";
        		cout<<a[2]<<" "<<a[0]<<" "<<"1"<<"\n";
        	}
        }
        else
        {
        	cout<<"NO\n";
        }
    }
    return 0;
}