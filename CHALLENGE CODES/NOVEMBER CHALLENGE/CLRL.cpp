#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,r;
		cin>>n>>r;
		ll a[n],count=0,temp=1e9+1,check=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>r)
			{
				if(a[i]<temp)
				{
				temp=a[i];
				count++;
			}
			}
			if(a[i]<r)
			{
				if(a[i]>check)
				{
				check=a[i];
				count++;
				
			}
			}
			if(a[i]==r)
			count++;
		}
			if(a[n-1]!=r)
		cout<<"N0"<<endl;
		else if(count==n)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
} 
