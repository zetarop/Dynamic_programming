#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define mod 1000000007


void number_of_chord(int n)
{
	n *= 2;
	int dp[n+1];
	fill(dp,dp+n+1,0);
	dp[0]=1;
	dp[2]=1;
	for(int i=4;i<=n;i+=2)
		for(int j=0;j<=i-2;j+=2)
			dp[i] += dp[j]*dp[i-2-j];
	cout<<dp[n]<<endl;
}

int main()
{
	int n;
	cin>>n;
	number_of_chord(n);
	return 0;
}
