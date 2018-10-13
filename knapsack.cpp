#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
using namespace std;

int main()
{
	int N,W;
	cin>>N>>W;
	int val[N], wei[N];
	int dp[W+1];
	fill(dp, dp+W+1,0);
	for(int i=0;i<N;i++)
		cin>>val[i];
	for(int i=0;i<N;i++)
		cin>>wei[i];

	for(int i=0;i<N;i++)
		for(int j=W;j>=wei[i];j--)
			dp[j] = max(dp[j], dp[j - wei[i]] + val[i]);

	cout<<dp[W]<<endl;
	return 0;
}
