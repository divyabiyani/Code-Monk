#include <bits/stdc++.h>

using namespace std;

long long int visited[1000001];
vector<long long int> adj[1000001];
long long int n;
long long int a[1000001];

long long int dfs(long long int s)
{
    long long int sum=0;
    visited[s] = true;
    for(int i = 0;i < adj[s].size();++i)
    {
        if(visited[adj[s][i]] == false)
            sum+=dfs(adj[s][i]);
    }
    return sum+a[s];
}

void initialize()
{
    for(int i = 0;i <n+1;++i)
    {
        visited[i] = false;
        adj[i].clear();
    }
}

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int m, x, y, max= 0,sum=0,i;
        scanf("%lld %lld",&n,&m);   
        initialize();                
        for(i = 0;i < m;i++)
        {
            scanf("%lld %lld",&x,&y);    
            adj[x].push_back(y);   
            adj[y].push_back(x);
        }  
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
        }             
        

        for(int i = 1;i <= n;i++) 
        {
            if(visited[i] == false)  
            {
                sum=dfs(i);
                if(sum>max)
                    max=sum;
            }
           
        }
        printf("%lld\n",max);
    }
    return 0;
}