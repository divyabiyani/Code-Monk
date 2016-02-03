#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int a,b,c,d;
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		c=c-d;
		if(((b*b)-(4*a*c))>=0)
		{
			double f=sqrt((b*b)-(4*a*c));
			//printf("%lf\n",f);
			double ans1=((-1*b)-f)/(2*a);
			double ans2=((-1*b)+f)/(2*a);
			//printf("%lf %lf\n",ans1,ans2);
			double ans;
			if(ans1>=0 && ans2>=0)
			{
				ans=min(ans1,ans2);
				long long int as;
				as=ceil(ans);
				printf("%lld\n",as);
			}
			else
			{
				ans=max(ans1,ans2);
				if(ans<0)
					printf("0\n");
				else
				{
					long long int as;
					as=ceil(ans);
					printf("%lld\n",as);
				}

			}
		}
		else
		{
			if(c>=0)

				printf("0\n");
		}

	}
}