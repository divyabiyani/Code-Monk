#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n;
	scanf("%lld",&n);
	long long int a,sum=0,k;
	for(k=0;k<n;k++)
	{
		scanf("%lld",&a);
		sum+=a;
	}
	if((sum/2)==n-1)
		printf("Yes\n");
	else
		printf("No\n");
	return(0);
}