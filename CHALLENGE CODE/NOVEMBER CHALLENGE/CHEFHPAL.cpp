#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a;
		cin>>n>>a;
		if(a==1)
		{
			cout<<n<<" ";
			for(ll i=0;i<n;i++)
			cout<<"a";
		}
		if(a==2)
		{
			if(n==1)
			cout<<"1"<<" "<<"a";
		   if(n==2)
		   cout<<"1"<<" "<<"ab";
		   if(n==3)
		   cout<<"2"<<" "<<"abb";
		   if(n==4)
		   cout<<"2"<<" "<<"aabb";
		   if(n==5)
		   cout<<"3"<<" "<<"aaaba";
		   if(n==6)
		   cout<<"3"<<" "<<"aaabab";
		   if(n==7)
		   cout<<"3"<<" "<<"aaababb";
		   if(n==8)
		   cout<<"3"<<" "<<"aaababbb";
		   if(n>=9)
		   {
		   	cout<<"4"<<" ";
		   	cout<<"aaaa";
		   	ll g=n-4;
		   	ll k=g;
		   	for(ll i=1;i<=g;i=i+6)
		   	{ 
		   		if(k>0)
		   		{
		   		cout<<"b";
		   		k--;
			   }
			   if(k>0)
			   {
			   	cout<<"a";
			   	k--;
			   }
			   if(k>0)
			   {
			   	cout<<"b";
			   	k--;
			   }
			   if(k>0)
			   {
			   	cout<<"b";
			   	k--;
			   }
			   if(k>0)
			   {
			   	cout<<"a";
			   	k--;
			   }
			   if(k>0)
			   {
			   	cout<<"a";
			   	k--;
			   }
		   }
		}
	}
		if(a>=3)
		{
			cout<<"1"<<" ";
			ll k=n;
			for(ll i=1;i<=n;i=i+3)
			{
				cout<<"a";
				k--;
				if(k>0)
				{
					cout<<"b";
					k--;
				}
				if(k>0)
				{
					cout<<"c";
					k--;
				}
			}
		}
	cout<<endl;
}
}
