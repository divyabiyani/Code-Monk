#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,m,i;
		map<long long int,long long int> count;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<n;i++)
		{
			long long int k;
			scanf("%lld",&k);
			count[k]++;
			printf("%lld ",count[k]);
		}
		for(i=0;i<m;i++)
		{
			long long int k;
			scanf("%lld",&k);
			if(count[k])
			{
				count[k]--;
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
	return(0);
}