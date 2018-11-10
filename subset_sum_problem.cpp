#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define inf 1000000007

using namespace std;


int solve()
{
	int n;
	int sum;
	cin>>n;
	ve<int> v(n);
	for(auto &x:v)
		cin>>x;
	cin>>sum;
	int dp[sum+1];
	fill(dp, dp+sum+1,0);
	dp[0]=1;
	for(auto x:v)
		for(int i=sum;i>=x;i--)
			dp[i] = dp[i] || dp[i-x];
	return dp[sum];
}


int main()
{
	int t;
	cin>>t;
	while(t--)
		cout<<solve()<<endl;
}
