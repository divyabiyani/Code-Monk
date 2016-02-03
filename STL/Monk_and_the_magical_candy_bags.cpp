#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		priority_queue<long long int> pq;
		long long int n,m;
		scanf("%lld %lld",&n,&m);
		while(n--)
		{
			long long int k;
			scanf("%lld",&k);
			pq.push(k);
		}
		long long int count=0;
		while(m--)
		{
			long long int highest=pq.top();
			pq.pop();
			count+=highest;
			pq.push(highest/2);
		}
		printf("%lld\n",count);
	}
	return(0);
}