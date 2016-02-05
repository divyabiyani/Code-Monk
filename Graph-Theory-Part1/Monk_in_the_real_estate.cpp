#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		set<long long int> s;
		long long int e;
		scanf("%lld",&e);
		long long int a,b;
		while(e--)
		{
			scanf("%lld %lld",&a,&b);
			s.insert(a);
			s.insert(b);
		}
		printf("%lld\n",s.size());
	}
	return(0);
}