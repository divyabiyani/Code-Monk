#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,i;
		scanf("%lld",&n);
		set<string> s;
		set<string> ::  iterator it;
		for(i=0;i<n;i++)
		{
			string a;
			cin>>a;
			s.insert(a);
		}

		for(it=s.begin();it!=s.end();++it)
		{
			cout<<*it<<endl;
		}
	}
	return(0);
}