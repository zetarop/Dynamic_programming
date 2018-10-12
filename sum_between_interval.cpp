#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define inf 1000000007

int main()
{
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];

	int dp[n];
	dp[0]=A[0];
	for(int i=1;i<n;i++)
		dp[i] = dp[i-1]+A[i];

	int l,r;
	cin>>l>>r;
	cout<<dp[r-1]-dp[l-2]<<endl;
	return 0;
}
