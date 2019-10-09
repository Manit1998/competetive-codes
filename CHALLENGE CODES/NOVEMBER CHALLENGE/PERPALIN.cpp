#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,p;
		cin>>n>>p;
		if(n%p!=0)
		cout<<"impossible";
		else if(p==1||p==2)
		cout<<"impossible";
		else
		{
			ll k=n;
			for(ll i=1;i<=n;i=i+p)
			{
			ll g=p-2;
			cout<<"a";
			for(ll i=1;i<=g;i++)
			{
				cout<<"b";
			}
			cout<<"a";
		}
		}
		cout<<endl;
	}
} 
