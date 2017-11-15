#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll test;
	cin>>test;
	while(test--)
	{
		ll number;
		cin>>number;
		ll a[number][4];
		for(ll i=0;i<number;i++)
		{
			for(ll j=0;j<4;j++)
			{
				cin>>a[i][j];
			}
		}
		ll query;
		cin>>query;
		while(query--)
		{
			ll xm;
			cin>>xm;
			ll result[number];
			for(ll i=0;i<number;i++)
			{
				result[i]= a[i][0]+(xm*a[i][1])+(xm*xm*a[i][2])+(xm*xm*xm*a[i][3]);
			}
			sort(result,result+number);
			cout<<result[0]<<endl
		}
	}
	return 0;
}
