#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,m;
	scanf("%lld %lld",&n,&m);
	long long int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	while(m--)
	{
		scanf("%lld",&i);
		if(binary_search(a,a+n,i))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}