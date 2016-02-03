#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,i;
	scanf("%lld",&n);
	vector<pair<long long int,string>> v;
	long long int t;
	string s;
	for(i=0;i<n;i++)
	{
		cin>>s>>t;
		v.push_back(make_pair(-t,s));
	}
	sort(v.begin(),v.end());
	for(i = 0; i < v.size(); i++) 
	{
    	cout << v[i].second << " " << -1*v[i].first << endl;
	}
	return(0);
}