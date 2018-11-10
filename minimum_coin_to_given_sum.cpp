#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define inf 1000000007

using namespace std;

int solve()
{
	int n,sum;
	cin>>sum>>n;
	ve<int> v(n);
	for(auto &x:v)
		cin>>x;
	int dp[sum+1];
	fill(dp, dp+sum+1, inf);
	dp[0]=0;

	for(auto x:v)
		for(int i=x;i<=sum;i++)
			if(i >= x && dp[i-x] != inf)
				dp[i] = min(dp[i], 1+dp[i-x]);
	return dp[sum] == inf ? -1 : dp[sum];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		cout<<solve()<<endl;
}
