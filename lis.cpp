/*
  Given sequence digit.
  Find numer of ways to decode to a string.
*/
#include<bits/stdc++.h>
#define ve vector
#define pb push_back
#define ll long long
#define mod 1000000007



int lis(ve<int> v, int n)
{
	int dp[n];
	for(int i=0;i<n;i++)
		dp[i]=1;
	for(int i=1;i<n;i++)
		for(int j=0;j<i;j++)
			if(v[i] > v[j])
				dp[i] = max(dp[i], 1+dp[j]);
	return dp[n-1];
}

int main()
{
	int n;
	cin>>n;
	ve<int> v(n);
	for(auto &a:v) cin>>a;

	cout<<lis(v,n)<<endl;
}

