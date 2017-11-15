#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		ll a=0,b=0,c=0,d=0,count=0,doubt=0,k=2,n=2,m=2;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i]=='A')
			{
				a++;
				k=1;
				count=0;
				if(n==0)
				d=d-(doubt-1);
				n=3;
				m=0;
				doubt=0;	
			}
			if(s[i]=='B')
			{
				b++;
				k=0;
				doubt=0;
				if(m==0)
				c=c-(count-1);
				m=3;
				n=0;
				count=0;
			}
		
			if(k==1)
			{
				c++;
				count++;
			}
			
			if(k==0)
			{
				d++;
				doubt++;
			}
				if(i==s.size()-1&&s[i]=='.'&&count>0&&doubt==0)
			{
				c=c-(count-1);
			}
				if(i==s.size()-1&&s[i]=='.'&&count==0&&doubt>0)
				{
					d=d-(doubt-1);
				}
		}
		if(a==1&&b==1||a==0&&b==1||a==1&&b==0)
		{
			cout<<a<<" "<<b<<endl;
		}
		else
		cout<<c<<" "<<d<<endl;
	}
	return 0;
}
