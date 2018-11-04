#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define inf 1000000007

using namespace std;

int minimumCoin(ve<int> v, int sum)
{
	int dp[sum+1];
	fill(dp, dp+sum+1, inf);
	dp[0]=0;
	for(int i=1;i<=sum;i++)
		for(auto a:v)
			if(i >= a && dp[i-a] != inf)
				dp[i] = min(dp[i], 1+dp[i-a]);
	return dp[sum] == inf ? -1 : dp[sum];
}

int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &x:v)
		cin>>x;

	int sum;
	cin>>sum;

	cout<<minimumCoin(v, sum)<<endl;
	return 0;
}
