#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,q,L,R;
	cin>>n>>q>>L>>R;
	ll a[n+1];
	for(ll i=0;i<n+1;i++)
	a[i]=0;
	while(q--)
	{
		ll f;
		cin>>f;
		if(f==1)
		{
			ll x,y;
			cin>>x>>y;
			a[x]=y;
		}
		if(f==2)
		{
			ll l,r;
			cin>>l>>r;
			ll count=0;
			for(ll i=l;i<=r;i++)
			{
				if(a[i]<=R)
				    {
					if(a[i]>=L && a[i]<=R)
						{
						count++;
						}
				ll maximum=a[i];
				for(ll j=i+1;j<=r;j++)
				{
						if(maximum<a[j])
						maximum=a[j];
						if(maximum>R)
						break;
						else if(maximum>=L  && maximum<=R)
						count++;
				}
			}
		}
			cout<<count<<endl;
		}
		
	}
	return 0;
}
