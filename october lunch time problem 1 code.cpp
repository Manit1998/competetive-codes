#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		if(a.size()>=b.size())
		{
			ll baby=a.size();
		ll sum;
		ll ans;
		ll n[baby];
		ll j=b.size()-1;
		for(ll i=a.size()-1;i>=0;i--)
		{
			sum=(int(a[i])-48)+( int(b[j])-48);
			if(j<0)
			sum=( int(a[i]-48));
			j--;
			if(sum>=10)
			n[i]=sum%10;
			else
			n[i]=sum;
		}
		ll k=0,c=0;
		for(ll i=0;i<baby;i++)
		{
			if(n[i]==0)
			c++;
			if(c==baby)
		    cout<<"0"<<endl;
				if(n[i]!=0)
			k=1;
			if(k==0)
			{
			if(n[i]==0)
			continue;
		    }
		    else
		cout<<n[i];
			
	}
		cout<<endl;
	}
	else
	{
			ll baby=b.size();
		ll sum;
		ll ans;
		ll n[baby];
		ll j=a.size()-1;
		for(ll i=b.size()-1;i>=0;i--)
		{
			sum=( int(b[i])-48)+( int(a[j])-48);
			if(j<0)
			sum=( int(b[i]-48));
			j--;
			if(sum>=10)
			n[i]=sum%10;
			else
			n[i]=sum;
		}
		ll k=0, c=0;
		for(ll i=0;i<baby;i++)
		{ 
		if(n[i]==0)
		c++;
			if(c==baby-1)
		cout<<"0"<<endl;
		
			if(n[i]!=0)
			k=1;
			if(k==0)
			{
			if(n[i]==0)
			continue;
		    }
		    else
		cout<<n[i];
	
	}
		
		cout<<endl;
		
	}	
	}
	return 0;
} 
